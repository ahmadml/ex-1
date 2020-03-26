
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
#include <iostream>
using namespace std;


TEST_CASE("Test replacement of d and t") {
    string text = "xxx dond yyy";
    CHECK(find(text, "donD") == string("dond"));
    CHECK(find(text, "dund") == string("dond"));
    CHECK(find(text, "Dond") == string("dond"));
    CHECK(find(text, "Dont") == string("dond"));
    CHECK(find(text, "dond") == string("dond"));
    CHECK(find(text, "DUnd") == string("dond"));
    CHECK(find(text, "dunt") == string("dond"));
    CHECK(find(text, "dont") == string("dond"));
    
}

TEST_CASE("Grade: 99") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    
}

TEST_CASE("Test replacement of d and t") {
    string text = "xxx vorri yyy";
    CHECK(find(text, "worri") == string("vorri"));
    CHECK(find(text, "Worri") == string("vorri"));
    CHECK(find(text, "wurri") == string("vorri"));
    CHECK(find(text, "wUrri") == string("vorri"));
    CHECK(find(text, "vorri") == string("vorri"));
    CHECK(find(text, "Vorri") == string("vorri"));
    CHECK(find(text, "worri") == string("vorri"));
    CHECK(find(text, "worry") == string("vorri"));
    CHECK(find(text, "worrY") == string("vorri"));
    CHECK(find(text, "WUrrY") == string("vorri"));
    CHECK(find(text, "wOrry") == string("vorri"));
    CHECK(find(text, "VOrry") == string("vorri"));
    
}

TEST_CASE("Test replacement of d and t") {
    string text = "xxx apple yyy";
    CHECK(find(text, "Apple") == string("apple"));
    CHECK(find(text, "apfle") == string("apple"));
    CHECK(find(text, "affle") == string("apple"));
    CHECK(find(text, "afple") == string("apple"));
    CHECK(find(text, "addle") == string("apple"));
    CHECK(find(text, "adple") == string("apple"));
    CHECK(find(text, "afdle") == string("apple"));
    CHECK(find(text, "apdle") == string("apple"));
    CHECK(find(text, "APdLE") == string("apple"));
    CHECK(find(text, "aDFle") == string("apple"));
    CHECK(find(text, "ApPlE") == string("apple));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    CHECK(find(text, "aDDle") == string("apple"));
    
}

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    
}
