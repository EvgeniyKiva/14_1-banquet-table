#include <iostream>

int main() {
    std::string tableware [12][4] = {{"fork", "spoon", "knife", "dessert_spoon"},
                                     {"fork", "spoon", "knife", "dessert_spoon"},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     {"fork", "spoon", "knife", " "},
                                     };
    std::string dishes [12][3] = {{"soup_plat","plat","dessert_plat"},
                                  {"soup_plat","plat","dessert_plat"},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},
                                  {"soup_plat","plat"," "},

                                  };

    std::string chair [12][2] = {{"chair"," "}, {"chair"," "}, {"chair"," "},
                                 {"chair"," "}, {"chair"," "}, {"chair"," "},
                                 {"chair"," "}, {"chair"," "}, {"chair"," "},
                                 {"chair"," "}, {"chair"," "}, {"chair"," "}};
/* 1 2
 * 3 4
 * 5 6
 * 7 8
 * 9 10
 * 11 12*/

    chair[8][1] = "chair";  // 5 место 1 ряд - 9 место, 8 по массиву
    tableware[5][1]  = " "; // 3 место 2 ряд - пропажа ложки

    tableware[5][1] = "spoon";
    tableware[0][1] = " "; // Перемещение ложки с места VIP

    dishes [0][2] = " "; // Официант забирает дисертную тарелку
    for (int i=0; i<12; i++){
        for (int j=0; j<4; j++){
            std::cout << tableware[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;

    for (int i=0; i<12; i++){
        for (int j=0; j<3; j++){
            std::cout<< dishes[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    for (int i=0; i<12; i++){
        for (int j=0; j<2; j++){
            std::cout << chair[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
