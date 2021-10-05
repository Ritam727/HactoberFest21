import java.io.*;
class TicTacToe1
{
    static String a[][];
    int row()throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the row= ");
            int r2=Integer.parseInt(br.readLine());
            System.out.println();
            return(r2);
        
    }
    int column()throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the column= ");
        int c2=Integer.parseInt(br.readLine());
        System.out.println();
        return(c2);
        
    }
    void show()
    {
        for(int x=0;x<3;x++)
            {
               for(int w1=0;w1<3;w1++)
                {
                    System.out.print("  "+a[x][w1]+"  ");
                    if(w1<2)
                    System.out.print("|");
                }
                if(x<2)
                 System.out.print("\n"+"---------------");
                System.out.println();
                
            }
    }
    int Tac(String h)
    {
        int p,q,r=0,s=0;//String X,O;
        int Q=0;
        /*if(h=="O")
        {X="X";O=h
        }
        else
        {
            X=h;O="O";
            
        }*/
         outer:
         for (int i=0;i<3;i++)
         {
             p=0;q=0;
            for(int j=0;j<3;j++)
            {
                if(a[i][j]==h)
                {
                    p++;
                    if(p==2)
                    {
                        for (int k=0;k<3;k++)
                        {
                         if(a[i][k]==" ")
                         {
                           a[i][k]="O";Q++;
                           break outer;
                         }
                        }
                        
                    }
                }
                if(a[j][i]==h)
                {
                    q++;
                    if(q==2)
                    {
                        for (int k=0;k<3;k++)
                        {
                         if(a[k][i]==" ")
                         {
                           a[k][i]="O";Q++;
                           break outer;
                         }
                        }
                        
                    }
                }
            if(i+j==2)
            {
             if(a[i][j]==h)
             {
                   r++;
                   if(r==2)
                  {
                     for (int f=0;f<3;f++)
                      {
             
                       for(int f1=0;f1<3;f1++)
                       {
                           if((f+f1==2)&&(a[f][f1]==" "))
                           {
                               a[f][f1]="O";Q++;
                               break outer;
                               
                            }
                       }
                        
                    } 
                     
                }
             }
            }
            if(i==j)
            {
                if(a[i][j]==h)
             {
                   s++;
                   if(s==2)
                  {
                     for (int f=0;f<3;f++)
                      {
             
                       for(int f1=0;f1<3;f1++)
                       {
                           if((f==f1)&&(a[f][f1]==" "))
                           {
                               a[f][f1]="O";Q++;
                               break outer;
                               
                            }
                       }
                        
                    } 
                     
                }
             }
 
            }
          }
        }
        return(Q);
    }
    int check(String a1)
    {
        int p,q,r=0,s=0,g=0;
        for (int i=0;i<3;i++)
         {
             p=0;q=0;
            for(int j=0;j<3;j++)
            {
                if (a[i][j]==a1)
                {
                    p++;
                    if(p==3)
                    {
                        return(++g);
                    }
                }
                if (a[j][i]==a1)
                {
                    q++;
                    if(q==3)
                    {
                        return(++g);
                    }
                }
                if(i+j==2)   
                { if (a[i][j]==a1)
                     {
                      r++;
                      if(r==3)
                       {
                        return(++g);
                       }
                    }
                }
                if(i==j)
                { if (a[i][j]==a1)
                     {
                      s++;
                      if(s==3)
                       {
                        return(++g);
                       }
                    }
                }
            }
        }
        return(g);
    }
     public static void main(String args[])throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Welcome to the TicTacToe Game");
         a=new String[3][3];
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j]=" ";
            }
        }
        System.out.println("Lets have the toss");int w=0;
        for(int kj=0;kj<5000000;kj++)
        {for(int gh=0;gh<500;gh++)
            {}
        }
            if ((int)(Math.random()*10)%2==0)
            {
              System.out.println("Computer Wins the toss");w=1;
            }
            else
              System.out.println("User Wins the toss");
        
        TicTacToe1 ob=new TicTacToe1();int c=1;
        while(true)
        {  
            if(w==0)
            {   int r=ob.row();
                int e=ob.column();
                a[r-1][e-1]="X";c=c+1;
                if(ob.check("X")==1)
                {ob.show();
                    System.out.print("You win");
                    System.exit(0);
                    
                }
                else if(c==6 && ob.check("X")==0)
                {System.out.println("Nobody Wins.");
                    System.exit(0);
                }
             }
                if(c==1)
                 {
                     if(w==1)
                     {
                         a[0][0]="O";
                         
                        }
                        
                  }
                else if(c==2)
                {
                    
                    if(a[0][1]==" " && a[0][2]==" ")
                     a[0][1]="O";
                    else if(a[1][1]==" " && a[2][2]==" ")
                     a[1][1]="O";
                    else if(a[1][0]==" " && a[2][0]==" ")
                     a[1][0]="O";
                 }
                 else if(c==3)
                 {
                     int z=ob.Tac("O");
                     int y=ob.check("O");
                     if(y==0)
                       {
                           z=ob.Tac("X");
                           if(z==0)
                           {
                               outer:
                               for (int i=0;i<3;i++)
                               {
                                  
                                  for(int j=0;j<3;j++)
                                  {
                                      if(a[i][j]==" ")
                                      {
                                          a[i][j]="O";
                                          break outer;
                                        }
                                      
                                    }
                                }
                            }
                        }
                       else
                       {
                           ob.show();
                           System.out.println("Computr Wins");
                           System.exit(0);
                        }
                    }
                
                else if(c==4)
                {
                    int z=ob.Tac("O");
                    int y=ob.check("O");
                    if(y==0)
                      {
                          int r1=ob.Tac("X");
                          if(r1==0)
                           {
                              outer:
                               for (int i=0;i<3;i++)
                               {
                                  
                                  for(int j=0;j<3;j++)
                                  {
                                      if(a[i][j]==" ")
                                      {
                                          a[i][j]="O";
                                          break outer;
                                        }
                                      
                                    }
                                }
                          }
                        }
                           
                        else 
                       {
                           ob.show();  
                           System.out.println("Computr Wins");
                           System.exit(0);
                       }
                    }
                else if(c==5)
                {
                    int z=ob.Tac("O");
                     int y=ob.check("O");int r1=ob.Tac("X");
                     if(y==0)
                     {
                         outer: 
                         for (int i=0;i<3;i++)
                      {
                                  
                        for(int j=0;j<3;j++)
                        {
                          if(a[i][j]==" ")
                          {
                            
                            
                            if(r1==0)
                            { 
                                 a[i][j]="O";ob.show();
                                System.out.println("Nobody Wins.");
                                System.exit(0);
                            }
                            else
                            {
                                //a[i][j]="O";ob.show();
                                break outer;
                            }
                           }
                                      
                        }
                     }
                    }
                     else
                       {
                           ob.show();
                           System.out.println("Computr Wins");
                           System.exit(0);
                        }
                }
            
            for(int x=0;x<3;x++)
            {
               for(int w1=0;w1<3;w1++)
                {
                    System.out.print("  "+a[x][w1]+"  ");
                    if(w1<2)
                    System.out.print("|");
                }
                if(x<2)
                 System.out.print("\n"+"-----------------");
                System.out.println();
                
            }
            if(w==1)
            {System.out.print("Enter the row= ");
            int r2=Integer.parseInt(br.readLine());
            System.out.println();
            System.out.print("Enter the coloumn= ");
            int c2=Integer.parseInt(br.readLine());
            System.out.println();
            
            //int c2=Intger.parseInt(br.readLine());
            a[r2-1][c2-1]="X";
            c=c+1;
            if(ob.check("X")==1)
                {ob.show();
                    System.out.print("You win");
                    System.exit(0);
                    
                }
           }
            
            
            
        }
        
    }
}
            
          
          
    

        
        
        

        
