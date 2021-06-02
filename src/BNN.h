#pragma once

#include "Matrix.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

class BNN {


    public: 

        BNN ();

        void build_network();

        void fwd_prop ();
        void bck_prop ();

        void set_num_in ();      // sets inputs
        void set_num_out();     // sets outputs
        void set_num_layers ();      // sets num hidden
        void set_layers ();

        void initialize ();     // initialize variables;


        unsigned unroll (unsigned i, unsigned j, unsigned cols);
        Matrix matmul (Matrix a, Matrix b);     // multiply two matrices


    private:

        vector<Matrix> weights_;      // inner vector contains matrix objects
        vector<vector<unsigned>> inputs_;    // column matrix for input stored as row vector
        vector<unsigned> layers_;            // keeps track of number of units per layer
        unsigned num_in_;                // number of inputs (with bias unit)
        unsigned num_out_;               // number of outputs (with bias unit)
        unsigned num_hidden_;           // number of hiddenlayers in architecture

        

};