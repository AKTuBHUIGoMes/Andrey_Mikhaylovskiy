using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

    class MyForm : Form
    {
    static int[,] array1 = { { 3, 4, 5 },  { 6, 7, 8 }, { 9, 10, 11 } };
    
    static int hod = 0;
         Button button11;
   
         Button button12;
         Button button13;
         Button button21;
         Button button22;
         Button button23;
         Button button31;
         Button button32;
         Button button33;

    public MyForm()
    {
        this.Size = new System.Drawing.Size(270, 280);
        this.BackColor = Color.Bisque;
        this.Text = "а голова чтобы думать...";
        
            
        this.BackgroundImage = global::krestiki_noliki.Properties.Resources.pg_png; 
        
        PictureBox pictureBox1 = new PictureBox();
        //pictureBox1.Image = Image.FromFile(@"C:\Users\andmi\Desktop\g.png");
      //  pictureBox1.Image = Image.FromFile(@"C:\Users\andmi\Desktop\p.png");
    
     //this.Controls.Add(pictureBox1);


     Button button_retry = new Button();
        button_retry.Top = 180;
        button_retry.Left = 50;
        button_retry.Width = 75;
        button_retry.Height = 35;
        button_retry.BackColor = Color.AliceBlue;
        button_retry.Text = "Restart!";
        button_retry.Click += new EventHandler(button_retry_Click);
        this.Controls.Add(button_retry);

        button11 = new Button(); //11
        button11.Top = 10;
        button11.Left = 10;
        button11.Width = 50;
        button11.Height = 50;
        button11.Text = " ";
        button11.Click += new System.EventHandler(button00_Click);
        this.Controls.Add(button11);

        button12 = new Button(); //12
        button12.Top = 60;
        button12.Left = 10;
        button12.Width = 50;
        button12.Height = 50;
        button12.Text = " ";
        button12.Click += new System.EventHandler(button01_Click);
        this.Controls.Add(button12);

        button13 = new Button(); //13
        button13.Top = 110;
        button13.Left = 10;
        button13.Width = 50;
        button13.Height = 50;
        button13.Text = " ";
        button13.Click += new System.EventHandler(button02_Click);
        this.Controls.Add(button13);

        button21 = new Button(); //21
        button21.Top = 10;
        button21.Left = 60;
        button21.Width = 50;
        button21.Height = 50;
        button21.Text = " ";
        button21.Click += new System.EventHandler(button10_Click);
        this.Controls.Add(button21);

        button22 = new Button(); //22
        button22.Top = 60;
        button22.Left = 60;
        button22.Width = 50;
        button22.Height = 50;
        button22.Text = " ";
        button22.Click += new System.EventHandler(button11_Click);
        this.Controls.Add(button22);

        button23 = new Button(); //23
        button23.Top = 110;
        button23.Left = 60;
        button23.Width = 50;
        button23.Height = 50;
        button23.Text = " ";
        button23.Click += new System.EventHandler(button12_Click);
        this.Controls.Add(button23);

        button31 = new Button(); //31
        button31.Top = 10;
        button31.Left = 110;
        button31.Width = 50;
        button31.Height = 50;
        button31.Text = " ";
        button31.Click += new System.EventHandler(button20_Click);
        this.Controls.Add(button31);

        button32 = new Button(); //32
        button32.Top = 60;
        button32.Left = 110;
        button32.Width = 50;
        button32.Height = 50;
        button32.Text = " ";
        button32.Click += new System.EventHandler(button21_Click);
        this.Controls.Add(button32);

        button33 = new Button(); //33
        button33.Top = 110;
        button33.Left = 110;
        button33.Width = 50;
        button33.Height = 50;
        button33.Text = " ";
        button33.Click += new System.EventHandler(button22_Click);
        this.Controls.Add(button33);
    }
  
    void button00_Click(object sender, EventArgs e)
    {
        if (button11.Text != " O" && button11.Text != " X")
        {
            if (hod % 2 == 0)
            {
                button11.Text = " O";
                array1[0, 0] = 0;
                button11.BackColor = Color.Aquamarine;
            }
            else
            {
                button11.Text = " X";
                array1[0, 0] = 1;
                //MessageBox.Show("lose");
                button11.BackColor = Color.Red;
            }
            hod++;
            CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button01_Click(object sender, EventArgs e)
    {
        if (button12.Text != " O" && button12.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button12.Text = " O";
            array1[0, 1] = 0;
            button12.BackColor = Color.Aquamarine;
        }
        else
        {
            button12.Text = " X";
            array1[0, 1] = 1;
            button12.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

    }

    void button02_Click(object sender, EventArgs e)
    {
        if (button13.Text != " O" && button13.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button13.Text = " O";
            array1[0, 2] = 0;
            button13.BackColor = Color.Aquamarine;
        }
        else
        {
            button13.Text = " X";
            array1[0, 2] = 1;
            button13.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
        // MessageBox.Show("0.2");
    }

    void button10_Click(object sender, EventArgs e)
    {
        if (button21.Text != " O" && button21.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button21.Text = " O";
            array1[1, 0] = 0;
            button21.BackColor = Color.Aquamarine;
        }
        else
        {
            button21.Text = " X";
            array1[1, 0] = 1;
            button21.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button11_Click(object sender, EventArgs e)
    {
        if (button22.Text != " O" && button22.Text != " X")
        {
            if (hod % 2 == 0)
            {
                button22.Text = " O";
                array1[1, 1] = 0;
                button22.BackColor = Color.Aquamarine;
            }
            else
            {
                button22.Text = " X";
                array1[1, 1] = 1;
                button22.BackColor = Color.Red;
            }
            hod++;
            CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button12_Click(object sender, EventArgs e)
    {
        if (button23.Text != " O" && button23.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button23.Text = " O";
            array1[1, 2] = 0;
            button23.BackColor = Color.Aquamarine;
        }
        else
        {
            button23.Text = " X";
            array1[1, 2] = 1;
            button23.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button20_Click(object sender, EventArgs e)
    {
        if (button31.Text != " O" && button31.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button31.Text = " O";
            array1[2, 0] = 0;
            button31.BackColor = Color.Aquamarine;
        }
        else
        {
            button31.Text = " X";
            array1[2, 0] = 1;
            button31.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button21_Click(object sender, EventArgs e)
    {
        if (button32.Text != " O" && button32.Text != " X")
        {
            if (hod % 2 == 0)
            {
                button32.Text = " O";
                array1[2, 1] = 0;
                button32.BackColor = Color.Aquamarine;
            }
            else
            {
                button32.Text = " X";
                array1[2, 1] = 1;
                button32.BackColor = Color.Red;
            }
            hod++;
            CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void button22_Click(object sender, EventArgs e)
    {
        if (button33.Text != " O" && button33.Text != " X")
        { 
        if (hod % 2 == 0)
        {
            button33.Text = " O";
            array1[2, 2] = 0;
            button33.BackColor = Color.Aquamarine;
        }
        else
        {
            button33.Text = " X";
            array1[2, 2] = 1;
            button33.BackColor = Color.Red;
        }
        hod++;
        CheckArray(array1, hod);
        }
        else
        {
            MessageBox.Show("так делать нельзя!!!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    void CheckArray(int[,] array, int hod)
    {
        //int i = 0, j = 0;

        if (array[0, 0] == array[0, 1] && array[0, 1] == array[0, 2])

        {
            MessageBox.Show(" line 0,0 —> 2,0");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else 
            {
                MessageBox.Show("win — 1");
            }
        }
        // 0.0 -> 0,2

        if (array[1, 0] == array[1, 1] && array[1, 1] == array[1, 2])

        {
            MessageBox.Show("line 1,0 —> 1,2");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else
            {
                MessageBox.Show("win — 1");
            }
        }
        // 1,0 -> 1,2

        if (array[2, 0] == array[2, 1] && array[2, 0] == array[2, 2])

        {
            MessageBox.Show(" line 2,0 —> 2,2 ");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else
            {
                MessageBox.Show("win — 1");
            }
        }
        // 2,0 —> 2,2

        if (array[0, 0] == array[1, 0] && array[1, 0] == array[2, 0])
            {
            MessageBox.Show("line 0,0 —> 2,0");
                if (hod % 2 == 0)
                {
                    MessageBox.Show("win — 2");
                }
                else 
                {
                    MessageBox.Show("win — 1");
                }
            }
        // 0,0 —> 2,0
        
        if (array[0, 1] == array[1, 1 ] && array[1, 1] == array[2, 1])
        {
            MessageBox.Show(" line 0,1 —> 2,1 ");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else
            {
                MessageBox.Show("win — 1");
            }
        }
        // 0,1 —> 2,1

        if (array[0, 2] == array[1, 2] && array[0, 2] == array[2, 2])
            {
            MessageBox.Show("line 0,2 —> 2,2 ");
                    if (hod % 2 == 0)
                    {
                        MessageBox.Show("win — 2");
                    }
                    else 
                    {
                        MessageBox.Show("win — 1");
                    }

                    //Console.WriteLine(hod);

                    return;
            }
        // line 0,2 —> 2,2

        if ( array [0,0] == array [1,1] && array [1,1] == array[2,2])
        {
            MessageBox.Show("line diag1 0,0 —> 2,2 ");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else
            {
                MessageBox.Show("win — 1");
            }

            //Console.WriteLine(hod);

            return;
        }
        // diag1

        if (array [0,2] == array [1,1] && array[2,0] == array[1,1])
        {
            MessageBox.Show("line diag2 0,2 —> 2,0 ");
            if (hod % 2 == 0)
            {
                MessageBox.Show("win — 2");
            }
            else
            {
                MessageBox.Show("win — 1");
            }

            //Console.WriteLine(hod);

            return;
        }
        // diag2

        // MessageBox.Show("!");
        //bool nich = false;

        int scht = 0;
        for (int i = 0; i < 3; ++i)
            for (int j=0; j<3; ++j)
            {
                if (array[i,j] == 0 || array[i,j] ==1 )
                {
                    scht++;
                }
            }
        if (scht ==9)
        {
            MessageBox.Show("ничья");
        }
       // MessageBox.Show($"{scht}");
        scht = 0;
    }
  
    void button_retry_Click( object sender, EventArgs e)
    {
        nullarray(array1);

        button11.Text = "";
        button12.Text = "";
        button13.Text = "";
        button22.Text = "";
        button23.Text = "";
        button21.Text = "";
        button33.Text = "";
        button32.Text = "";
        button31.Text = "";

        button11.BackColor = Color.Bisque;
        button12.BackColor = Color.Bisque;
        button13.BackColor = Color.Bisque;
        button22.BackColor = Color.Bisque;
        button21.BackColor = Color.Bisque;
        button23.BackColor = Color.Bisque;
        button31.BackColor = Color.Bisque;
        button32.BackColor = Color.Bisque;
        button33.BackColor = Color.Bisque;
        
        hod = 0;
        MessageBox.Show($"Complete! {hod}", "meow", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);

    }

    void nullarray ( int [,] array)
    {
        int scht = 61;
        for (int i =0; i<3; ++i)
            for ( int j=0; j<3; ++j)
            {
                array[i, j] = scht;
                scht++;
            }
        
    }
    void Win ( int [,] array, int hod)
    {
       
    }
    static void Main()
        {
           
            Application.Run(new MyForm());
       // Console.WriteLine(hod);
        
        }
    }

