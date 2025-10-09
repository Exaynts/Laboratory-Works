using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Laba4_csharp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            W_value.SelectedIndex = 0;
            T_list.SelectedIndex = 0;
        }
        private void button1_Click_1(object sender, EventArgs e) {
            double Zoo = 0;
            double X = Convert.ToDouble(X_value.Text);
            double Y = Convert.ToDouble(Y_value.Text);
            int N = Convert.ToInt32(N_value.Text);
            double W = Convert.ToDouble(W_value.SelectedItem.ToString()); // Было: comboboxW
            double T = Convert.ToDouble(T_list.SelectedItem.ToString());

            if (eq1.Checked) {
                Zoo = 0;
                double item = 0;
                for (int i = 0; i < N; i++) {
                    item = (i % 2 == 0) ? Y : X;
                    Zoo += Math.Pow(-1, i % 2) * Math.Pow(item, i);
                }
            }
            else {
                Zoo = W * X - T * Y + 7;
            }
            Zoo_value.Text = Zoo.ToString();

        }
#region
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged_1(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void l6_Click(object sender, EventArgs e)
        {

        }
        #endregion

        private void W_value_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

        }
    }
}
