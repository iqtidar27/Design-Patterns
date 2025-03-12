#include "sandwich.h"

int main()
{
    Sandwich burger(Bread::BurgerBun, Protein::BeefPatty, vector<Side>{Side::Lettuce, Side::Cheese, Side::Tomato},
                    vector<Sauce>{Sauce::YumYum}, Wrapper::Paper);

    Sandwich hotdog(Bread::HotdogBun, Protein::Dog, vector<Side>{Side::Onions},
                    vector<Sauce>{Sauce::Ketchup, Sauce::Mustard}, Wrapper::Box);

    Sandwich BLT(Bread::Toast, Protein::Bacon, vector<Side>{Side::Tomato, Side::Lettuce},
                 vector<Sauce>{Sauce::Mayo}, Wrapper::Plastic);
}