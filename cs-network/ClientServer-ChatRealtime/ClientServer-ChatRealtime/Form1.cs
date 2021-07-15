using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Linq.Expressions;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ClientServer_ChatRealtime
{
    public partial class Form1 : Form
    {
        private TcpClient client;
        private StreamReader str;  //อ่านมา
        private StreamWriter stw;  //เขียนไป
        public string receive=null; //จัดเก็บรับ-ส่ง
        public string textsend=null; //จัดเก็บข้อความที่เราจะส่งไปหา
        public string sendtxt=null; //รับข้อความที่ส่งมา
        public Form1()
        {
            InitializeComponent();
            IPAddress[] localIP = Dns.GetHostAddresses(Dns.GetHostName());
            foreach (IPAddress address in localIP)
            {
                if (address.AddressFamily == AddressFamily.InterNetwork)
                {
                    txtIPServer.Text = address.ToString();
                }
            }
        }

        private void btnStartServer_Click(object sender, EventArgs e)
        {
            TcpListener listener = new TcpListener(IPAddress.Any, Int32.Parse(txtPortServer.Text));
            listener.Start();
            client = listener.AcceptTcpClient(); //รอให้ Client มาเชื่อมต่อ
            str = new StreamReader(client.GetStream());
            stw = new StreamWriter(client.GetStream());
            stw.AutoFlush = true; //เคลียร์ memory
            backgroundWorker1.RunWorkerAsync(); 
            backgroundWorker2.WorkerSupportsCancellation = true; //ให้ยกเลิกได้
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            client = new TcpClient();
            IPEndPoint ip_end = new IPEndPoint(IPAddress.Parse(txtIPClient.Text), Int32.Parse(txtPortClient.Text));
            try
            {
                client.Connect(ip_end);
                if (client.Connected)
                {
                    txtShowMessage.AppendText("Connect Complete \n");
                    stw = new StreamWriter(client.GetStream());
                    str = new StreamReader(client.GetStream());
                    stw.AutoFlush = true;
                    backgroundWorker1.RunWorkerAsync();
                    backgroundWorker2.WorkerSupportsCancellation = true;
                }
            }catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txtSend.Text))
            {
                sendtxt = txtSend.Text;
                backgroundWorker2.RunWorkerAsync();
            }
            txtSend.Text = "";
        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {
            while (client.Connected)
            {
                try{
                    receive = str.ReadLine();
                    this.txtShowMessage.Invoke(new MethodInvoker(delegate ()
                    {
                        this.txtShowMessage.AppendText("You: " + receive + "\n");
                    }));
                    receive = "";
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }
        }

        private void backgroundWorker2_DoWork(object sender, DoWorkEventArgs e)
        {
            if (client.Connected)
            {
                stw.WriteLine(sendtxt);
                this.txtShowMessage.Invoke(new MethodInvoker(delegate ()
                {
                    this.txtShowMessage.AppendText("Me: " + sendtxt + "\n");
                }));
            }
            else
            {
                MessageBox.Show("Error");
            }
            backgroundWorker2.CancelAsync();
        }
    }
}
