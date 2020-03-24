

/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"

#include <string>
using namespace std;

TEST_CASE("Test replacement of f, p and b") {
    string text = "back happy for ROF YPPAH KCAB";
    CHECK(phonetic::find(text, "hafpy") == string("happy"));
    CHECK(phonetic::find(text, "happy") == string("happy"));
    CHECK(phonetic::find(text, "habPy") == string("happy"));
    CHECK(phonetic::find(text, "haFpy") == string("happy"));
    CHECK(phonetic::find(text, "haPpy") == string("happy"));
    CHECK(phonetic::find(text, "haBPy") == string("happy"));
    CHECK(phonetic::find(text, "fack") == string("back"));
    CHECK(phonetic::find(text, "back") == string("back"));
    CHECK(phonetic::find(text, "pack") == string("back"));
    CHECK(phonetic::find(text, "Fack") == string("back"));
    CHECK(phonetic::find(text, "Back") == string("back"));
    CHECK(phonetic::find(text, "pack") == string("back"));
    CHECK(phonetic::find(text, "for") == string("for"));
    CHECK(phonetic::find(text, "bor") == string("for"));
    CHECK(phonetic::find(text, "por") == string("for"));
    CHECK(phonetic::find(text, "For") == string("for"));
    CHECK(phonetic::find(text, "Bor") == string("for"));
    CHECK(phonetic::find(text, "Por") == string("for"));
    CHECK(phonetic::find(text, "YfPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "YpPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "YbPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "YFPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "YPPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "YBPAH") == string("YPPAH"));
    CHECK(phonetic::find(text, "KCAf") == string("KCAB"));
    CHECK(phonetic::find(text, "KCAp") == string("KCAB"));
    CHECK(phonetic::find(text, "KCAb") == string("KCAB"));
    CHECK(phonetic::find(text, "KCAF") == string("KCAB"));
    CHECK(phonetic::find(text, "KCAP") == string("KCAB"));
    CHECK(phonetic::find(text, "KCAB") == string("KCAB"));
    CHECK(phonetic::find(text, "ROf") == string("ROF"));
    CHECK(phonetic::find(text, "ROp") == string("ROF"));
    CHECK(phonetic::find(text, "ROb") == string("ROF"));
    CHECK(phonetic::find(text, "ROF") == string("ROF"));
    CHECK(phonetic::find(text, "ROP") == string("ROF"));
    CHECK(phonetic::find(text, "ROB") == string("ROF"));
  }

TEST_CASE("Test replacement of v and  w") {
    string text = "vivid why VOTE WHAT";
    CHECK(phonetic::find(text, "vivid") == string("vivid"));
    CHECK(phonetic::find(text, "wivid") == string("vivid"));
    CHECK(phonetic::find(text, "Vivid") == string("vivid"));
    CHECK(phonetic::find(text, "Wivid") == string("vivid"));
    CHECK(phonetic::find(text, "vhy") == string("why"));
    CHECK(phonetic::find(text, "why") == string("why"));
    CHECK(phonetic::find(text, "Why") == string("why"));
    CHECK(phonetic::find(text, "Vhy") == string("why"));
    CHECK(phonetic::find(text, "vOTE") == string("VOTE"));
    CHECK(phonetic::find(text, "wOTE") == string("VOTE"));
    CHECK(phonetic::find(text, "VOTE") == string("VOTE"));
    CHECK(phonetic::find(text, "WOTE") == string("VOTE"));
    CHECK(phonetic::find(text, "wHAT") == string("WHAT"));
    CHECK(phonetic::find(text, "vHAT") == string("WHAT"));
    CHECK(phonetic::find(text, "VHAT") == string("WHAT"));
    CHECK(phonetic::find(text, "WHAT") == string("WHAT"));

}
TEST_CASE("Test replacement of g and  j") {
    string text = "jug JUGs yyy";
    CHECK(phonetic::find(text, "gug") == string("jug"));
    CHECK(phonetic::find(text, "Jug") == string("jug"));
    CHECK(phonetic::find(text, "Gug") == string("jug"));
    CHECK(phonetic::find(text, "juj") == string("jug"));
    CHECK(phonetic::find(text, "jug") == string("jug"));
    CHECK(phonetic::find(text, "juJ") == string("jug"));
    CHECK(phonetic::find(text, "juG") == string("jug"));
    CHECK(phonetic::find(text, "jUGs") == string("JUGs"));
    CHECK(phonetic::find(text, "gUGs") == string("JUGs"));
    CHECK(phonetic::find(text, "GUGs") == string("JUGs"));
    CHECK(phonetic::find(text, "JUjs") == string("JUGs"));
    CHECK(phonetic::find(text, "JUJs") == string("JUGs"));
    CHECK(phonetic::find(text, "JUgs") == string("JUGs"));
    CHECK(phonetic::find(text, "JUGs") == string("JUGs"));
}
TEST_CASE("Test replacement of c, k and q") {
    string text = "xxx quicken QUICKENs";
    CHECK(phonetic::find(text, "cuicken") == string("quicken"));
    CHECK(phonetic::find(text, "kuicken") == string("quicken"));
    CHECK(phonetic::find(text, "Cuicken") == string("quicken"));
    CHECK(phonetic::find(text, "Kuicken") == string("quicken"));
    CHECK(phonetic::find(text, "Quicken") == string("quicken"));
    CHECK(phonetic::find(text, "quikken") == string("quicken"));
    CHECK(phonetic::find(text, "quiqken") == string("quicken"));
    CHECK(phonetic::find(text, "quiCken") == string("quicken"));
    CHECK(phonetic::find(text, "quiKken") == string("quicken"));
    CHECK(phonetic::find(text, "quiQken") == string("quicken"));
    CHECK(phonetic::find(text, "quiccen") == string("quicken"));
    CHECK(phonetic::find(text, "quicken") == string("quicken"));
    CHECK(phonetic::find(text, "quicqen") == string("quicken"));
    CHECK(phonetic::find(text, "quicCen") == string("quicken"));
    CHECK(phonetic::find(text, "quicKen") == string("quicken"));
    CHECK(phonetic::find(text, "quicQen") == string("quicken"));
    CHECK(phonetic::find(text, "cUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "qUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "kUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "CUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "KUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUIcKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUIkKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUIQKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUIKKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUIQKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICcENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICkENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICqENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICCENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICKENs") == string("QUICKENs"));
    CHECK(phonetic::find(text, "QUICQENs") == string("QUICKENs"));

}
TEST_CASE("Test replacement of s and z") {
    string text = "xxx SIZE adzes";
    CHECK(phonetic::find(text, "adses") == string("adzes"));
    CHECK(phonetic::find(text, "adSes") == string("adzes"));
    CHECK(phonetic::find(text, "adZes") == string("adzes"));
    CHECK(phonetic::find(text, "adzes") == string("adzes"));
    CHECK(phonetic::find(text, "adzez") == string("adzes"));
    CHECK(phonetic::find(text, "adzeS") == string("adzes"));
    CHECK(phonetic::find(text, "adzeZ") == string("adzes"));
    CHECK(phonetic::find(text, "sIZE") == string("SIZE"));
    CHECK(phonetic::find(text, "zIZE") == string("SIZE"));
    CHECK(phonetic::find(text, "ZIZE") == string("SIZE"));
    CHECK(phonetic::find(text, "SIsE") == string("SIZE"));
    CHECK(phonetic::find(text, "SIzE") == string("SIZE"));
    CHECK(phonetic::find(text, "SISE") == string("SIZE"));
    CHECK(phonetic::find(text, "SIZE") == string("SIZE"));
}
TEST_CASE("Test replacement of o and u") {
    string text = "xxx UOY you";
    CHECK(phonetic::find(text, "yuu") == string("you"));
    CHECK(phonetic::find(text, "yOu") == string("you"));
    CHECK(phonetic::find(text, "yUu") == string("you"));
    CHECK(phonetic::find(text, "you") == string("you"));
    CHECK(phonetic::find(text, "yoo") == string("you"));
    CHECK(phonetic::find(text, "yoU") == string("you"));
    CHECK(phonetic::find(text, "yoO") == string("you"));
    CHECK(phonetic::find(text, "uOY") == string("UOY"));
    CHECK(phonetic::find(text, "oOY") == string("UOY"));
    CHECK(phonetic::find(text, "OOY") == string("UOY"));
    CHECK(phonetic::find(text, "UuY") == string("UOY"));
    CHECK(phonetic::find(text, "UoY") == string("UOY"));
    CHECK(phonetic::find(text, "UUY") == string("UOY"));
    CHECK(phonetic::find(text, "UOY") == string("UOY"));
}
TEST_CASE("Test replacement of i and y") {
    string text = "xxx IVY babify";
    CHECK(phonetic::find(text, "babify") == string("babify"));
    CHECK(phonetic::find(text, "babyfy") == string("babify"));
    CHECK(phonetic::find(text, "babIfy") == string("babify"));
    CHECK(phonetic::find(text, "babYfy") == string("babify"));
    CHECK(phonetic::find(text, "babifi") == string("babify"));
    CHECK(phonetic::find(text, "babifI") == string("babify"));
    CHECK(phonetic::find(text, "babifY") == string("babify"));
    CHECK(phonetic::find(text, "iVY") == string("IVY"));
    CHECK(phonetic::find(text, "yVY") == string("IVY"));
    CHECK(phonetic::find(text, "IVY") == string("IVY"));
    CHECK(phonetic::find(text, "YVY") == string("IVY"));
    CHECK(phonetic::find(text, "IVi") == string("IVY"));
    CHECK(phonetic::find(text, "IVy") == string("IVY"));
    CHECK(phonetic::find(text, "IVI") == string("IVY"));

}
TEST_CASE("Test replacement of all leters togeter") {
    string text = "xxx yyy  vwvwbfpbfppfbjggjckqqkckcqszzsdttdouuoiyyi";
    CHECK(phonetic::find(text, "VWVWBFPBFPPFBJGGJCKQQKCKCQSZZSDTTDOUUOIYYI") == string("vwvwbfpbfppfbjggjckqqkckcqszzsdttdouuoiyyi"));
    CHECK(phonetic::find(text, "WvwvfbFFFfffpjjjjKCQQQqqqqzzssddTDoUouiiyy") == string("vwvwbfpbfppfbjggjckqqkckcqszzsdttdouuoiyyi"));
    CHECK(phonetic::find(text, "vvvvbBBBbbbBBGggGckKKkckckssssddDdUouoiYYI") == string("vwvwbfpbfppfbjggjckqqkckcqszzsdttdouuoiyyi"));
    CHECK(phonetic::find(text, "vwwwbfPbfppfbjjjjcKqqKckcqszzsddddoOuoiyyi") == string("vwvwbfpbfppfbjggjckqqkckcqszzsdttdouuoiyyi"));
}
TEST_CASE("Test 2 good answors") {
    string text = "vwv yiy yyy vww";
    CHECK(phonetic::find(text, "yyy") == string("yiy"));
    CHECK(phonetic::find(text, "yiI") == string("yiy"));
    CHECK(phonetic::find(text, "vww") == string("vwv"));
    CHECK(phonetic::find(text, "vwv") == string("vwv"));
}
TEST_CASE("Test expsions empty text") {
    string text = "";
    CHECK(phonetic::find(text, "f") == string(""));
    CHECK(phonetic::find(text, "") == string(""));

}
TEST_CASE("Test empty word") {
    string text = "vwv yiy yyy vww";
    CHECK(phonetic::find(text, "") == string(""));
}
TEST_CASE("Test symbols") {
    string text = "3$ \"8 *\" \\0/ !@''#$%^&*('''')   עברית test@email.com";
    CHECK(phonetic::find(text, "dezt@emaYl.qum") == string("test@email.com"));
    CHECK(phonetic::find(text, "עברית") == string("עברית"));
    CHECK(phonetic::find(text, "!@''#$%^&*('''')") == string("!@''#$%^&*('''')"));
    CHECK(phonetic::find(text, "0") == string(""));
    CHECK(phonetic::find(text, "\\0/") == string("\\0/"));
    CHECK(phonetic::find(text, "\"8") == string("\"8"));
    CHECK(phonetic::find(text, " ") == string(""));
}

TEST_CASE("Test find first result out of 2") {
    string text = "first FIrsT firsd second seQond Zecond";
    CHECK(phonetic::find(text, "FIrsT") == string("first"));
    CHECK(phonetic::find(text, "firsd") == string("first"));
    CHECK(phonetic::find(text, "pirst") == string("first"));
    CHECK(phonetic::find(text, "pyrsd") == string("first"));
    CHECK(phonetic::find(text, "fyrsT") == string("first"));
    CHECK(phonetic::find(text, "seQond") == string("second"));
    CHECK(phonetic::find(text, "Zecond") == string("second"));
    CHECK(phonetic::find(text, "Zecont") == string("second"));
    CHECK(phonetic::find(text, "ZeQond") == string("second"));
    CHECK(phonetic::find(text, "ZeKonT") == string("second"));
    CHECK(phonetic::find(text, "zeQUnt") == string("second"));
    CHECK(phonetic::find(text, "seConT") == string("second"));
}
