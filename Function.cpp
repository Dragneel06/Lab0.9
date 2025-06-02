#include "Function.hpp"

using WorkOfMassif::Function;
using WorkOfMassif::Massif;

namespace WorkOfMassif {
    Function::Function(Massif& massif) {
        vector<int> fMassif = massif.getMassif();

        minValue = *std::min_element(fMassif.begin(), fMassif.end());
        maxValue = *std::max_element(fMassif.begin(), fMassif.end());
        for (int val : fMassif) {
            sum += val;
        }
        average = sum / fMassif.size();

        cout << endl << "Minimum value is: " << minValue;
        cout << endl << "Maximum value is: " << maxValue;
        cout << endl << "Sum is: " << sum-1;
        cout << endl << "Average is: " << average << endl;
    }
}