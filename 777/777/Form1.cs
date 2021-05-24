using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace _777 
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
          
        private void button1_Click(object sender, EventArgs e)
        {
            try
            {

                CValueFraction fraction1 = new CValueFraction();
                CValueFraction fraction2 = new CValueFraction();
                if (!Int32.TryParse(fraction1Denominator.Text, out fraction1.valueDenominator))
                    throw new Exception("error Input");
                if (!Int32.TryParse(fraction2Denominator.Text, out fraction2.valueDenominator))
                    throw new Exception("error Input");
                if (!Int32.TryParse(fraction1Numerator.Text, out fraction1.valueNumerator))
                    throw new Exception("error Input");
                if (!Int32.TryParse(fraction2Numerator.Text, out fraction2.valueNumerator))
                    throw new Exception("error Input");
                CValueFraction c3 = new CValueFraction();
                if (fraction1.valueDenominator < 0 && fraction1.valueNumerator < 0)
                {
                    fraction1.valueNumerator *= -1;
                    fraction1.valueDenominator *= -1;
                }
                if (fraction2.valueDenominator < 0 && fraction2.valueNumerator < 0)
                {
                    fraction2.valueNumerator *= -1;
                    fraction2.valueDenominator *= -1;
                }
                if (fraction1.valueDenominator < 0 && fraction1.valueNumerator > 0)
                {
                    fraction1.valueNumerator *= -1;
                    fraction1.valueDenominator *= -1;
                }
                if (fraction2.valueDenominator < 0 && fraction2.valueNumerator > 0)
                {
                    fraction2.valueNumerator *= -1;
                        fraction2.valueDenominator *= -1;
                    }
                switch (comboBox1.SelectedItem.ToString())
                {
                    case "+":  c3 = fraction1 + fraction2; break;
                    case "-":  c3 = fraction1 - fraction2; break;
                    case "*":  c3 = fraction1 * fraction2; break;
                    case "/":  c3 = fraction1 / fraction2; break;
                }

                if ((c3.valueDenominator == c3.valueNumerator) || c3.valueNumerator == 0 || c3.valueDenominator == 0)
                {
                    answerDenominator.Visible = false;
                    answerNumerator.Visible = false;
                    finalText.Visible = true;
                    finalText.Text = Convert.ToString(c3.valueNumerator);
                }
                else 
                {
                    answerDenominator.Visible = true;
                    answerNumerator.Visible = true;
                    finalText.Visible = false;
                    answerDenominator.Text = Convert.ToString(c3.valueDenominator);
                    answerNumerator.Text = Convert.ToString(c3.valueNumerator);
                }
                //fraction1.valueDenominator /= 0;
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message); 
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
           
            //MessageBox.Show(comboBox1.Text);
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
           
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
