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

    chair[8][1] = "chair";  // 5 ?????????? 1 ?????? - 9 ??????????, 8 ???? ??????????????
    tableware[5][1]  = " "; // 3 ?????????? 2 ?????? - ?????????????? ??????????

    tableware[5][1] = "spoon";
    tableware[0][1] = " "; // ?????????????????????? ?????????? ?? ?????????? VIP

    dishes [0][2] = " "; // ???????????????? ???????????????? ?????????????????? ??????????????
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
