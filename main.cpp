#include <stdio.h>
#include <stdlib.h>

#include <ncurses.h> // NCURESES add into program
// -> i need to download that on my laptop
// for simple linux:
// for fedora:
// There is no ncurses on Windoes but there're ower libs

class ncruse_mn
{
    private:
        /* data */
        int **matrix;
    public:
        ncruse_mn(/* args */);

        //Most simple example of ncurses work
        void example(){
            char key = 'c'; // to save simbol
            initscr(); // start of ncurses --
            while(key != 'q'){
                printw("-------\n");        //   \   printw(); - that's the same with printf();
                printw("|      |\n");        //    |     I need to use it into ncurses
                printw("| cort |\n");        //    |
                printw("|      |\n");        //    |
                printw("-------\n");        //    |
                                            //   /
                key = getch();//                /
                clear();//to clear window every|eteration                 --
            }//                               /
            endwin();//end of ncurses  <-----/
        }

        void matrix_out(){
            
        }
        
        ~ncruse_mn();
};

ncruse_mn::ncruse_mn(/* args */)
{
    matrix = new int *[20];
    for (int i = 0; i < 20; i++) {
        matrix[i] = new int[20];
        for (int j = 0; j < 20; j++)
        matrix[i][j] = 0;
    }
}

ncruse_mn::~ncruse_mn()
{
    for (int i = 0; i < 20; i++)
        delete[] matrix[i];
    delete[] matrix;
}



int main(int argc, char **argv){
    ncruse_mn nc_object;
    nc_object.example();
    return 0;
}