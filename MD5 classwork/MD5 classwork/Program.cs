using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Security.Cryptography;
using System.Diagnostics;

namespace MD5_classwork
{
	class Program
	{
		static void CheckSumm(String directoryName)
		{
			String[] dirs = Directory.GetDirectories(directoryName);
			String[] files = Directory.GetFiles(directoryName);

			using (MD5 md5hash = MD5.Create())
			{
				byte[] str = Encoding.Default.GetBytes(directoryName);
				byte[] hash = md5hash.ComputeHash(str);
				String hashString = Encoding.Default.GetString(hash);
				Console.WriteLine(hashString);
			
			if (dirs.Length > 0)
			{
				Array.Sort(dirs);
				foreach(String dir in dirs)
				{
					CheckSumm(dir);
				}
			}
			Array.Sort(files);
				foreach(String file in files)
				{
					FileStream fileStream = File.OpenRead(file);
					byte[] fileHash = md5hash.ComputeHash(fileStream);
					String fileHashString = Encoding.Default.GetString(fileHash);
					Console.WriteLine(fileHashString);
					fileStream.Close();
				}
			}
		} // It does even work
		static void CheckSummParallel(String directoryName)
		{

		} // UNFINISHED
		static void Main(string[] args)
		{
			Stopwatch stopWatch = new Stopwatch();
			stopWatch.Start();

			Console.WriteLine("Choose which folder at the desctop to open");
			String directoryName = "C:\\Users\\julia\\Desktop\\";
			directoryName += Console.ReadLine();
			CheckSumm(directoryName);

			stopWatch.Stop();
			TimeSpan ts = stopWatch.Elapsed;
			string elapsedTime = String.Format("{0:00}:{1:00}:{2:00}.{3:00}",
				ts.Hours, ts.Minutes, ts.Seconds,
				ts.Milliseconds / 10);
			Console.WriteLine("RunTime " + elapsedTime);
		}
	}
}
