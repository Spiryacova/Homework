using System;
using System.Windows.Forms;

namespace TickTackToe
{
	static class Program
	{
		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main()
		{
			Application.EnableVisualStyles();
			Application.SetCompatibleTextRenderingDefault(false);
			Application.Run(new Form1());
		}
	}

	static class TickTackToe
	{
		/// <summary>
		/// Game logic
		/// </summary>

		/// <summary>
		/// One turn of game
		/// Checkes validation of turn, changes side and button's view if it was valid
		/// </summary>
		public static void Step(int number) {

		}

		/// <summary>
		/// Clears field, resets side to default
		/// </summary>
		public static void ClearField() { }

		/// <summary>
		/// Represents who's turn is it
		/// </summary>
		public static bool side = false;
	}
}
