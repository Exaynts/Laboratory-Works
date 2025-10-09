namespace Laba4_csharp
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
            this.X_value = new System.Windows.Forms.TextBox();
            this.Y_value = new System.Windows.Forms.TextBox();
            this.N_value = new System.Windows.Forms.TextBox();
            this.l1 = new System.Windows.Forms.Label();
            this.l2 = new System.Windows.Forms.Label();
            this.l3 = new System.Windows.Forms.Label();
            this.l4 = new System.Windows.Forms.Label();
            this.l5 = new System.Windows.Forms.Label();
            this.T_list = new System.Windows.Forms.ListBox();
            this.equations = new System.Windows.Forms.GroupBox();
            this.eq2 = new System.Windows.Forms.RadioButton();
            this.eq1 = new System.Windows.Forms.RadioButton();
            this.W_value = new System.Windows.Forms.ComboBox();
            this.button1 = new System.Windows.Forms.Button();
            this.l6 = new System.Windows.Forms.Label();
            this.Zoo_value = new System.Windows.Forms.TextBox();
            this.equations.SuspendLayout();
            this.SuspendLayout();
            // 
            // X_value
            // 
            this.X_value.Location = new System.Drawing.Point(123, 82);
            this.X_value.Name = "X_value";
            this.X_value.Size = new System.Drawing.Size(100, 20);
            this.X_value.TabIndex = 0;
            this.X_value.Text = "0";
            // 
            // Y_value
            // 
            this.Y_value.Location = new System.Drawing.Point(123, 140);
            this.Y_value.Name = "Y_value";
            this.Y_value.Size = new System.Drawing.Size(100, 20);
            this.Y_value.TabIndex = 1;
            this.Y_value.Text = "0";
            // 
            // N_value
            // 
            this.N_value.Location = new System.Drawing.Point(123, 200);
            this.N_value.Name = "N_value";
            this.N_value.Size = new System.Drawing.Size(100, 20);
            this.N_value.TabIndex = 2;
            this.N_value.Text = "0";
            // 
            // l1
            // 
            this.l1.AutoSize = true;
            this.l1.Location = new System.Drawing.Point(80, 85);
            this.l1.Name = "l1";
            this.l1.Size = new System.Drawing.Size(14, 13);
            this.l1.TabIndex = 3;
            this.l1.Text = "X";
            this.l1.Click += new System.EventHandler(this.label1_Click);
            // 
            // l2
            // 
            this.l2.AutoSize = true;
            this.l2.Location = new System.Drawing.Point(80, 140);
            this.l2.Name = "l2";
            this.l2.Size = new System.Drawing.Size(14, 13);
            this.l2.TabIndex = 4;
            this.l2.Text = "Y";
            // 
            // l3
            // 
            this.l3.AutoSize = true;
            this.l3.Location = new System.Drawing.Point(80, 200);
            this.l3.Name = "l3";
            this.l3.Size = new System.Drawing.Size(15, 13);
            this.l3.TabIndex = 5;
            this.l3.Text = "N";
            // 
            // l4
            // 
            this.l4.AutoSize = true;
            this.l4.Location = new System.Drawing.Point(294, 82);
            this.l4.Name = "l4";
            this.l4.Size = new System.Drawing.Size(18, 13);
            this.l4.TabIndex = 6;
            this.l4.Text = "W";
            // 
            // l5
            // 
            this.l5.AutoSize = true;
            this.l5.Location = new System.Drawing.Point(294, 147);
            this.l5.Name = "l5";
            this.l5.Size = new System.Drawing.Size(14, 13);
            this.l5.TabIndex = 7;
            this.l5.Text = "T";
            // 
            // T_list
            // 
            this.T_list.FormattingEnabled = true;
            this.T_list.Items.AddRange(new object[] {
            "0,001",
            "0,1",
            "10",
            "100",
            "1000",
            "10000"});
            this.T_list.Location = new System.Drawing.Point(348, 140);
            this.T_list.Name = "T_list";
            this.T_list.Size = new System.Drawing.Size(120, 95);
            this.T_list.TabIndex = 8;
            this.T_list.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged_1);
            // 
            // equations
            // 
            this.equations.Controls.Add(this.eq2);
            this.equations.Controls.Add(this.eq1);
            this.equations.Location = new System.Drawing.Point(610, 53);
            this.equations.Name = "equations";
            this.equations.Size = new System.Drawing.Size(163, 143);
            this.equations.TabIndex = 9;
            this.equations.TabStop = false;
            this.equations.Text = "Выбор уравнения";
            // 
            // eq2
            // 
            this.eq2.AutoSize = true;
            this.eq2.Location = new System.Drawing.Point(6, 50);
            this.eq2.Name = "eq2";
            this.eq2.Size = new System.Drawing.Size(90, 17);
            this.eq2.TabIndex = 11;
            this.eq2.TabStop = true;
            this.eq2.Text = "Уравнение 2";
            this.eq2.UseVisualStyleBackColor = true;
            // 
            // eq1
            // 
            this.eq1.AutoSize = true;
            this.eq1.Location = new System.Drawing.Point(6, 27);
            this.eq1.Name = "eq1";
            this.eq1.Size = new System.Drawing.Size(90, 17);
            this.eq1.TabIndex = 10;
            this.eq1.TabStop = true;
            this.eq1.Text = "Уравнение 1";
            this.eq1.UseVisualStyleBackColor = true;
            this.eq1.CheckedChanged += new System.EventHandler(this.radioButton1_CheckedChanged);
            // 
            // W_value
            // 
            this.W_value.FormattingEnabled = true;
            this.W_value.Items.AddRange(new object[] {
            "0,05",
            "0,7",
            "0,9"});
            this.W_value.Location = new System.Drawing.Point(348, 79);
            this.W_value.Name = "W_value";
            this.W_value.Size = new System.Drawing.Size(121, 21);
            this.W_value.TabIndex = 12;
            this.W_value.Text = "0,05";
            this.W_value.SelectedIndexChanged += new System.EventHandler(this.W_value_SelectedIndexChanged);
            // 
            // button1
            // 
            this.button1.Image = global::Laba4_csharp.Properties.Resources.math_root1;
            this.button1.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.button1.Location = new System.Drawing.Point(99, 306);
            this.button1.Name = "button1";
            this.button1.Padding = new System.Windows.Forms.Padding(20, 0, 0, 0);
            this.button1.Size = new System.Drawing.Size(196, 100);
            this.button1.TabIndex = 13;
            this.button1.Text = "Calculate";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // l6
            // 
            this.l6.AutoSize = true;
            this.l6.Location = new System.Drawing.Point(345, 368);
            this.l6.Name = "l6";
            this.l6.Size = new System.Drawing.Size(26, 13);
            this.l6.TabIndex = 14;
            this.l6.Text = "Zoo";
            this.l6.Click += new System.EventHandler(this.l6_Click);
            // 
            // Zoo_value
            // 
            this.Zoo_value.Location = new System.Drawing.Point(398, 365);
            this.Zoo_value.Name = "Zoo_value";
            this.Zoo_value.ReadOnly = true;
            this.Zoo_value.Size = new System.Drawing.Size(100, 20);
            this.Zoo_value.TabIndex = 15;
            this.Zoo_value.Text = "0";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Zoo_value);
            this.Controls.Add(this.l6);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.W_value);
            this.Controls.Add(this.equations);
            this.Controls.Add(this.T_list);
            this.Controls.Add(this.l5);
            this.Controls.Add(this.l4);
            this.Controls.Add(this.l3);
            this.Controls.Add(this.l2);
            this.Controls.Add(this.l1);
            this.Controls.Add(this.N_value);
            this.Controls.Add(this.Y_value);
            this.Controls.Add(this.X_value);
            this.Name = "Form1";
            this.Text = "Form1";
            this.equations.ResumeLayout(false);
            this.equations.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox X_value;
        private System.Windows.Forms.TextBox Y_value;
        private System.Windows.Forms.TextBox N_value;
        private System.Windows.Forms.Label l1;
        private System.Windows.Forms.Label l2;
        private System.Windows.Forms.Label l3;
        private System.Windows.Forms.Label l4;
        private System.Windows.Forms.Label l5;
        private System.Windows.Forms.ListBox T_list;
        private System.Windows.Forms.GroupBox equations;
        private System.Windows.Forms.RadioButton eq1;
        private System.Windows.Forms.RadioButton eq2;
        private System.Windows.Forms.ComboBox W_value;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label l6;
        private System.Windows.Forms.TextBox Zoo_value;
    }
}

