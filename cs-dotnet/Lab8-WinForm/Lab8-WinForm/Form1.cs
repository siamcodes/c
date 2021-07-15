using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab8_WinForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                var num1 = Convert.ToDouble(textBox1.Text);
                var num2 = Convert.ToDouble(textBox2.Text);
                var ansAdd = num1 + num2;

                textBox3.Text = ansAdd.ToString();
                MessageBox.Show( ansAdd.ToString(), "คำตอบ" );

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "ผิดพลาด");
            }

        }

    }
}
