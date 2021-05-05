using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//реализация делегатов и лямб
namespace lab8
{
    enum Test { yammy, sugar, not_yammy };

    enum AppleType { orange, mandarin, lemon };

    enum GrapesType { Merlo, KishMish, Heho }

    abstract class Fruits : screwed_up
    {
        public delegate void sw(string stringg);
        static public sw sw2 = delegate (string stringg) { Console.WriteLine(stringg); }; // делегат для метода 
        public int how_many;
        public delegate void screwed();// делегат для события
        public Test Tasty;
        static public void output(sw sw1, string stroka) => sw1(stroka);  // лямбда-выражение
        public abstract void Info();
                  
    }

    class Apple : Fruits
    {
        public event screwed AppleLose, AppleScrewed = screwed_up_apple;// = screwed_up_all_grapes; 
        public AppleType TypeA;
        public Apple()
        {

        }
        public Apple(AppleType type)
        {
            this.TypeA = type;
        }  //vid 
        public Apple(AppleType type, Test test)
        {
            this.TypeA = type;
            this.Tasty = test;
        } //vid + vkus
        public override void Info()
        {
            Console.WriteLine(TypeA);
        }

        public void Perebor()
        {
            Random random2 = new Random();
            int ost = random2.Next(1,this.how_many);
            Console.WriteLine(100/ost + "% — вероятность, что груша абстрактная ");

            while(this.how_many!=0)
            {
                Console.ForegroundColor = ConsoleColor.Red;
                if (this.how_many % ost == 0)
                    output(sw2, " bez sugar");
                else
                {
                    Console.ForegroundColor = ConsoleColor.White;
                    AppleScrewed?.Invoke();
                }
                this.how_many--;
                Console.ForegroundColor = ConsoleColor.White;
            }
            AppleLose?.Invoke();
        }
    }
    class Grapes : Fruits
    {
        public event screwed GrapesLose, GrapesScrewed = screwed_up_grapes;// = () => output(sw2, "applls");       
        public GrapesType TypeG;
        public Grapes()
        {

        }
        public Grapes(GrapesType type)
        {
            this.TypeG = type;
        }
        public Grapes(GrapesType type, Test test)
        {
            this.TypeG = type;
            this.Tasty = test;
        }
        public override void Info()
        {
            Console.WriteLine(TypeG);
        }
        public void Info(Test test)
        {
            Console.WriteLine(test);
        }

        public void Perebor()
        {
            Random random1 = new Random();
            int ost = random1.Next(1, this.how_many);
            Console.WriteLine(100 / ost + "% — вероятность, что груша абстрактная");
            if (100 / ost == 100)
                Console.WriteLine(" ну не позвело)))0 не фортанул)))");
            
            while (this.how_many!=0)
            {
                Console.ForegroundColor = ConsoleColor.Red;
                if (this.how_many % ost == 0)
                    output(sw2, "bez sahara");
                else
                {
                    Console.ForegroundColor = ConsoleColor.White;
                    GrapesScrewed?.Invoke();
                }
                this.how_many--;                             
            }
            Console.ForegroundColor = ConsoleColor.White; 
            GrapesLose?.Invoke();           
        }
    } 
    
    // https://www.youtube.com/watch?v=IHqroSvcTlE&t

    class screwed_up
    {
        static public void screwed_up_apple() => Console.WriteLine("screwed up 1 apple");
        static public void screwed_up_grapes() => Console.WriteLine("screwed up 1 grapes");
        static public void screwed_up_all_apple() => Console.WriteLine("screwed up all apple\n");
        static public void screwed_up_all_grapes() => Console.WriteLine("screwed up all grapes\n");

    }
    class Program : screwed_up
    {
        static void Main(string[] args)
        {
            

        Grapes grapes1 = new Grapes();
            Apple apple1 = new Apple();

            while (true)
            {
                try
                {
                    Console.WriteLine("Initial value apple");

                    apple1.how_many = Convert.ToInt32(Console.ReadLine());

                    if (apple1.how_many < 0)
                        throw new Exception("фруктов должно хватать!!!!");

                    Console.WriteLine("Initial value grapes");

                    grapes1.how_many = Convert.ToInt32(Console.ReadLine());

                    if (grapes1.how_many < 0)
                        throw new Exception("фруктов должно хватать!!!!");
                    Console.WriteLine("\n");
                    break;
                }
                catch (ArgumentException ex)
                {
                    Console.WriteLine(ex.Message + "Rerun\n"); //отрицательный ввод
                }
                catch (Exception ex)
                {
                    Console.WriteLine(ex.Message + "\n"); // любое другое исключение
                };
            }

            apple1.AppleLose += delegate () { Console.WriteLine("Перебор окончен!"); }; //анонимный метод
            apple1.AppleLose += screwed_up_all_apple; //событие x
            apple1.AppleLose += () => Console.WriteLine("\n._.\n");
            apple1.Perebor();

            grapes1.GrapesLose += delegate () { Console.WriteLine("Перебор окончен!"); };
            grapes1.GrapesLose += screwed_up_all_grapes;
            grapes1.Perebor();

          //  delegate void delegg();
        // delegg delegg1;

    }
    //screwed_up screwed_Up = new screwed_up();

    //message?.Invoke();
    //message += str;


    // message();

    ////nevirt nevirt1 = new nevirt();

    ////nevirt1.ksis();


    //output(sw2, "output");

    //Message message = delegate () { Console.WriteLine("где бутерброды"); };
    // static void str () =>  Console.WriteLine($"tr");

    //static void output(sw sw1, string stroka) => sw1(stroka);

    static void HudojestvenniiFilm(int gr, int ap)
        {

        }

        delegate void d();

        static void Proverla(int a) {
            d output = () => Console.WriteLine(" ");
            if (a == 100) output.Invoke();
        }
    }

     
}
