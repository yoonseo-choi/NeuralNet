#include "BNN.h"

int main () {

    BNN bnn;
    bnn.build_network();
    bnn.print_layers();
    bnn.print_weights();
    bnn.print_inputs ();
}