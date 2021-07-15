using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab9_winform
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            MainForm mainform = new MainForm();
            mainform.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            Form1 form1 = new Form1();
            form1.Show();
        }

        private void btnProcess_Click(object sender, EventArgs e)
        {
            int x, y, z; 
            x = Convert.ToInt32(txtMul.Text);
            txtShow.Clear();
            for(y=1; y<=12; y++)
            {
                z = x * y;
                txtShow.Text += x + "*" + y + "=" + z+"\r\n";
            }
        }
    }
}
