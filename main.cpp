#include <QApplication>

#include "baby.h"
#include "widget.h"
#include "assembler.h"

/* main() function of the program */
int main(int argc, char *argv[]) {   
    Assembler assembler;
    SymbolTable symbolTable;
    Assembler::assemble(symbolTable);

    ManchesterBaby baby;
    QApplication a(argc, argv);
    Widget gui(&baby);
    gui.mainWindow.show();
    return QApplication::exec();
}
