using System;
using System.Windows.Forms;

namespace TickTackToe
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void OnButtonClick(object sender, EventArgs e)
		{
			Button button = (Button)sender;
			string data = (string)button.Tag;
			TickTackToe.Step(data);
		}

		private void OnButtonExitClick(object sender, EventArgs e)
		{
			Close();
		}

		private void tableLayoutPanel1_Paint(object sender, PaintEventArgs e)
		{

		}

		private void OnButtonClearFieldClick(object sender, EventArgs e)
		{
			TickTackToe.ClearField();
		}
	}
}
