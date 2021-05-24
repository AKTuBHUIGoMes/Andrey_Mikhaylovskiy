
namespace _777
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.answerDenominator = new System.Windows.Forms.TextBox();
            this.answerNumerator = new System.Windows.Forms.TextBox();
            this.fraction2Denominator = new System.Windows.Forms.TextBox();
            this.fraction2Numerator = new System.Windows.Forms.TextBox();
            this.fraction1Denominator = new System.Windows.Forms.TextBox();
            this.fraction1Numerator = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.button1 = new System.Windows.Forms.Button();
            this.finalText = new System.Windows.Forms.TextBox();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(601, 324);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(144, 22);
            this.textBox1.TabIndex = 0;
            // 
            // answerDenominator
            // 
            this.answerDenominator.Location = new System.Drawing.Point(576, 145);
            this.answerDenominator.Name = "answerDenominator";
            this.answerDenominator.Size = new System.Drawing.Size(144, 22);
            this.answerDenominator.TabIndex = 6;
            // 
            // answerNumerator
            // 
            this.answerNumerator.Location = new System.Drawing.Point(576, 89);
            this.answerNumerator.Name = "answerNumerator";
            this.answerNumerator.Size = new System.Drawing.Size(144, 22);
            this.answerNumerator.TabIndex = 5;
            // 
            // fraction2Denominator
            // 
            this.fraction2Denominator.Location = new System.Drawing.Point(350, 145);
            this.fraction2Denominator.Name = "fraction2Denominator";
            this.fraction2Denominator.Size = new System.Drawing.Size(144, 22);
            this.fraction2Denominator.TabIndex = 8;
            // 
            // fraction2Numerator
            // 
            this.fraction2Numerator.Location = new System.Drawing.Point(350, 89);
            this.fraction2Numerator.Name = "fraction2Numerator";
            this.fraction2Numerator.Size = new System.Drawing.Size(144, 22);
            this.fraction2Numerator.TabIndex = 7;
            // 
            // fraction1Denominator
            // 
            this.fraction1Denominator.Location = new System.Drawing.Point(50, 145);
            this.fraction1Denominator.Name = "fraction1Denominator";
            this.fraction1Denominator.Size = new System.Drawing.Size(144, 22);
            this.fraction1Denominator.TabIndex = 10;
            // 
            // fraction1Numerator
            // 
            this.fraction1Numerator.Location = new System.Drawing.Point(50, 89);
            this.fraction1Numerator.Name = "fraction1Numerator";
            this.fraction1Numerator.Size = new System.Drawing.Size(144, 22);
            this.fraction1Numerator.TabIndex = 9;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "+",
            "-",
            "*",
            "/"});
            this.comboBox1.Location = new System.Drawing.Point(208, 117);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 24);
            this.comboBox1.TabIndex = 11;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(50, 220);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(156, 50);
            this.button1.TabIndex = 12;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // finalText
            // 
            this.finalText.Location = new System.Drawing.Point(576, 117);
            this.finalText.Name = "finalText";
            this.finalText.Size = new System.Drawing.Size(144, 22);
            this.finalText.TabIndex = 14;
            // 
            // button2
            // 
            this.button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.button2.Image = global::_777.Properties.Resources._for;
            this.button2.ImageAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.button2.Location = new System.Drawing.Point(734, 469);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(419, 68);
            this.button2.TabIndex = 13;
            this.button2.Text = "button2";
            this.button2.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Info;
            this.ClientSize = new System.Drawing.Size(1165, 549);
            this.Controls.Add(this.finalText);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.fraction1Denominator);
            this.Controls.Add(this.fraction1Numerator);
            this.Controls.Add(this.fraction2Denominator);
            this.Controls.Add(this.fraction2Numerator);
            this.Controls.Add(this.answerDenominator);
            this.Controls.Add(this.answerNumerator);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox answerDenominator;
        private System.Windows.Forms.TextBox answerNumerator;
        private System.Windows.Forms.TextBox fraction2Denominator;
        private System.Windows.Forms.TextBox fraction2Numerator;
        private System.Windows.Forms.TextBox fraction1Denominator;
        private System.Windows.Forms.TextBox fraction1Numerator;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox finalText;
        private System.Windows.Forms.Button button2;
    }
}

