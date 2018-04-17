namespace TickTackToe
{
	partial class Form1
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.tableLayoutPanel1 = new System.Windows.Forms.TableLayoutPanel();
			this.tableLayoutPanel2 = new System.Windows.Forms.TableLayoutPanel();
			this.button9 = new System.Windows.Forms.Button();
			this.button8 = new System.Windows.Forms.Button();
			this.button7 = new System.Windows.Forms.Button();
			this.button6 = new System.Windows.Forms.Button();
			this.button5 = new System.Windows.Forms.Button();
			this.button4 = new System.Windows.Forms.Button();
			this.button1 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.ClearFiend = new System.Windows.Forms.Button();
			this.Exit = new System.Windows.Forms.Button();
			this.tableLayoutPanel1.SuspendLayout();
			this.tableLayoutPanel2.SuspendLayout();
			this.SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this.tableLayoutPanel1.AutoSize = true;
			this.tableLayoutPanel1.ColumnCount = 1;
			this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 71.61017F));
			this.tableLayoutPanel1.Controls.Add(this.tableLayoutPanel2, 0, 0);
			this.tableLayoutPanel1.Controls.Add(this.Exit, 0, 1);
			this.tableLayoutPanel1.Controls.Add(this.ClearFiend, 0, 1);
			this.tableLayoutPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
			this.tableLayoutPanel1.Location = new System.Drawing.Point(0, 0);
			this.tableLayoutPanel1.Name = "tableLayoutPanel1";
			this.tableLayoutPanel1.RowCount = 2;
			this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 83.33334F));
			this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 16.66667F));
			this.tableLayoutPanel1.Size = new System.Drawing.Size(484, 382);
			this.tableLayoutPanel1.TabIndex = 0;
			this.tableLayoutPanel1.Paint += new System.Windows.Forms.PaintEventHandler(this.tableLayoutPanel1_Paint);
			// 
			// tableLayoutPanel2
			// 
			this.tableLayoutPanel2.ColumnCount = 3;
			this.tableLayoutPanel2.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
			this.tableLayoutPanel2.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33334F));
			this.tableLayoutPanel2.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33334F));
			this.tableLayoutPanel2.Controls.Add(this.button9, 2, 2);
			this.tableLayoutPanel2.Controls.Add(this.button8, 1, 2);
			this.tableLayoutPanel2.Controls.Add(this.button7, 0, 2);
			this.tableLayoutPanel2.Controls.Add(this.button6, 2, 1);
			this.tableLayoutPanel2.Controls.Add(this.button5, 1, 1);
			this.tableLayoutPanel2.Controls.Add(this.button4, 0, 1);
			this.tableLayoutPanel2.Controls.Add(this.button1, 2, 0);
			this.tableLayoutPanel2.Controls.Add(this.button2, 0, 0);
			this.tableLayoutPanel2.Controls.Add(this.button3, 1, 0);
			this.tableLayoutPanel2.Dock = System.Windows.Forms.DockStyle.Fill;
			this.tableLayoutPanel2.Location = new System.Drawing.Point(3, 3);
			this.tableLayoutPanel2.Name = "tableLayoutPanel2";
			this.tableLayoutPanel2.RowCount = 3;
			this.tableLayoutPanel2.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
			this.tableLayoutPanel2.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
			this.tableLayoutPanel2.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
			this.tableLayoutPanel2.Size = new System.Drawing.Size(340, 300);
			this.tableLayoutPanel2.TabIndex = 0;
			// 
			// button9
			// 
			this.button9.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button9.Location = new System.Drawing.Point(229, 203);
			this.button9.Name = "button9";
			this.button9.Size = new System.Drawing.Size(108, 94);
			this.button9.TabIndex = 9;
			this.button9.Tag = "33";
			this.button9.UseVisualStyleBackColor = true;
			this.button9.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button8
			// 
			this.button8.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button8.Location = new System.Drawing.Point(116, 203);
			this.button8.Name = "button8";
			this.button8.Size = new System.Drawing.Size(107, 94);
			this.button8.TabIndex = 8;
			this.button8.Tag = "32";
			this.button8.UseVisualStyleBackColor = true;
			this.button8.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button7
			// 
			this.button7.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button7.Location = new System.Drawing.Point(3, 203);
			this.button7.Name = "button7";
			this.button7.Size = new System.Drawing.Size(107, 94);
			this.button7.TabIndex = 7;
			this.button7.Tag = "31";
			this.button7.UseVisualStyleBackColor = true;
			this.button7.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button6
			// 
			this.button6.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button6.Location = new System.Drawing.Point(229, 103);
			this.button6.Name = "button6";
			this.button6.Size = new System.Drawing.Size(108, 94);
			this.button6.TabIndex = 6;
			this.button6.Tag = "23";
			this.button6.UseVisualStyleBackColor = true;
			this.button6.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button5
			// 
			this.button5.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button5.Location = new System.Drawing.Point(116, 103);
			this.button5.Name = "button5";
			this.button5.Size = new System.Drawing.Size(107, 94);
			this.button5.TabIndex = 5;
			this.button5.Tag = "22";
			this.button5.UseVisualStyleBackColor = true;
			this.button5.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button4
			// 
			this.button4.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button4.Location = new System.Drawing.Point(3, 103);
			this.button4.Name = "button4";
			this.button4.Size = new System.Drawing.Size(107, 94);
			this.button4.TabIndex = 4;
			this.button4.Tag = "21";
			this.button4.UseVisualStyleBackColor = true;
			this.button4.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button1
			// 
			this.button1.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button1.Location = new System.Drawing.Point(229, 3);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(108, 94);
			this.button1.TabIndex = 3;
			this.button1.Tag = "13";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button2
			// 
			this.button2.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button2.Location = new System.Drawing.Point(3, 3);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(107, 94);
			this.button2.TabIndex = 1;
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// button3
			// 
			this.button3.Dock = System.Windows.Forms.DockStyle.Fill;
			this.button3.Location = new System.Drawing.Point(116, 3);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(107, 94);
			this.button3.TabIndex = 2;
			this.button3.Tag = "12";
			this.button3.UseVisualStyleBackColor = true;
			this.button3.Click += new System.EventHandler(this.OnButtonClick);
			// 
			// ClearFiend
			// 
			this.ClearFiend.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Right)));
			this.ClearFiend.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
			this.ClearFiend.Location = new System.Drawing.Point(353, 276);
			this.ClearFiend.Name = "ClearFiend";
			this.ClearFiend.Size = new System.Drawing.Size(155, 41);
			this.ClearFiend.TabIndex = 11;
			this.ClearFiend.Text = "ClearField";
			this.ClearFiend.UseVisualStyleBackColor = true;
			this.ClearFiend.Click += new System.EventHandler(this.OnButtonClearFieldClick);
			// 
			// Exit
			// 
			this.Exit.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
			this.Exit.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
			this.Exit.Location = new System.Drawing.Point(353, 9);
			this.Exit.Margin = new System.Windows.Forms.Padding(10, 15, 3, 15);
			this.Exit.MinimumSize = new System.Drawing.Size(100, 40);
			this.Exit.Name = "Exit";
			this.Exit.Size = new System.Drawing.Size(155, 40);
			this.Exit.TabIndex = 10;
			this.Exit.Text = "Exit";
			this.Exit.UseVisualStyleBackColor = true;
			this.Exit.Click += new System.EventHandler(this.OnButtonExitClick);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.AutoSize = true;
			this.ClientSize = new System.Drawing.Size(484, 382);
			this.Controls.Add(this.tableLayoutPanel1);
			this.MinimumSize = new System.Drawing.Size(500, 320);
			this.Name = "Form1";
			this.Tag = "11";
			this.Text = "Tick-Tack-Toe";
			this.tableLayoutPanel1.ResumeLayout(false);
			this.tableLayoutPanel2.ResumeLayout(false);
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;
		private System.Windows.Forms.TableLayoutPanel tableLayoutPanel2;
		private System.Windows.Forms.Button button9;
		private System.Windows.Forms.Button button8;
		private System.Windows.Forms.Button button7;
		private System.Windows.Forms.Button button6;
		private System.Windows.Forms.Button button5;
		private System.Windows.Forms.Button button4;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button Exit;
		private System.Windows.Forms.Button ClearFiend;
	}
}

