using System;

namespace Program
{
    class training
    {
        public static void Main(string[] args)
        {
            string str = Console.ReadLine();
            for (int i = 0; i < str.Length; i++)
            {
                if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                    Console.Write(str[i]);
            }
        }
    }
}