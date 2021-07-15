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
    public partial class Form1 : Form
    {
        public Form1()
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
            Form2 form2 = new Form2();
            form2.Show();
        }

        private void brnProcess_Click(object sender, EventArgs e)
        {
            const double VAT = 0.07;
            double price, vat, total;
            price = Convert.ToDouble(txtPrice.Text);
            vat = price * VAT;
            total = price + vat;
            txtVat.Text = vat.ToString("#,###.##");
            txtTotal.Text = total.ToString("#,###.##");
        }

        private void txtVat_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
