#include <iostream>

using namespace std;

int main() {
    int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0;
    int answer1, answer2, answer3, answer4;
    cout << "The Sorting Hat Quiz!" << endl;
    cout << "Q1) When I'm dead, I want people to remember me as:\n1) The Good\n2) The Great\n3) The Wise\n4) The Bold" << endl;
    std::cin >> answer1;
    if (answer1 == 1) {

    hufflepuff++;

    }
    else if (answer1 == 2) {

    slytherin+=1;

    }
    else if (answer1 == 3) {

    ravenclaw+=1;

    }
    else if (answer1 == 4) {

    gryffindor+=1;

    }
    else {

    cout << "Invalid input" << endl;

    }
    cout << "Q2) Dawn or Dusk?" << endl;
    std::cin >> answer2;
    if (answer2 == 1)
        {
        gryffindor++;
        ravenclaw++;
        }
    else if (answer2 == 2)
        {
        hufflepuff++;
        slytherin++;
        }
    else {
        cout << "Invalid input" << endl;
    }
    cout << "Q3) Which kind of instrument most pleases your ear?\n\n1) The violin\n2) The trumpet\n3) The piano\n4) The drum" << endl;
    std::cin >> answer3;

    if (answer3 == 1){

        slytherin++;

    }
    else if (answer3 == 2){

        hufflepuff++;

    }
    else if (answer3 == 2){

        ravenclaw++;

    }
    else if (answer3 == 2){

        gryffindor++;

    }
    else {
        cout << "Invalid input" << endl;
    }
    cout << "Q4) Which road tempts you most?\n\n1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)" << endl;
    std::cin >> answer4;
    if (answer4 == 1)
    {
        hufflepuff++;
    }
    else if (answer4 == 2)
    {
        slytherin++;
    }
    else if (answer4 == 3)
    {
        gryffindor++;
    }
    else if (answer4 == 4)
    {
        ravenclaw++;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    std::string house;
    int maximum = 0;
    if (gryffindor > maximum)
    {
        maximum = gryffindor;
        house = "Gryffindor";
    }
    if (gryffindor > maximum)
    {
        maximum = gryffindor;
        house = "Gryffindor";
    }
    if (gryffindor > maximum)
    {
        maximum = gryffindor;
        house = "Gryffindor";
    }
    if (gryffindor > maximum)
    {
        maximum = gryffindor;
        house = "Gryffindor";
    }
}

