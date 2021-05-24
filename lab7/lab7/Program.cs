using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab7
{
    interface Imarks
    {
        int marks { get; set; }

       void execellent(int sum, int amount);

    }
    
    interface Iill
    {
        bool durachok { get; set; }

        void healhty( bool dur);
            
    }

    class Andrey : Iill, Imarks
    {
      public  int marks { get; set; }

      public  bool durachok { get; set; }

       public void execellent (int sum, int amount)
        {
            if (sum / amount < 7)
            {
                Console.WriteLine("execellent");
            }
            else
            {
                Console.WriteLine("not execellent");    
            }
        }

       public void healhty (bool dur)
        {
            if (dur)
                Console.WriteLine(dur);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {

            Andrey andrey = new Andrey();
            andrey.durachok = true;

            andrey.marks = 5;

            andrey.healhty(andrey.durachok);

        }
    }
}
