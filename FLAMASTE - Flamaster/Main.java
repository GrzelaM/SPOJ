import java.util.*;
import java.lang.*;
import java.util.Scanner;
class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        int howManySeries = in.nextInt();

        for(int i = 0; i <= howManySeries; i++){
            String series = in.nextLine();
            char [] tab = series.toCharArray();

            for(int j=0; j < tab.length; j++){
                if(j+1 < tab.length){
                    System.out.print(tab[j]);
                    if(tab[j] == tab[j+1]) {
                        int counter = 1;
                        while (j + 1 < tab.length && tab[j] == tab[j + 1]) {
                            counter++;
                            j++;
                        }
                        if(counter > 2) {
                            System.out.print(counter);
                        }else{
                            System.out.print(tab[j]);
                        }

                    }
                }
                else{
                    System.out.print(tab[j]);
                }
            }
            System.out.println();
        }
    }
}
