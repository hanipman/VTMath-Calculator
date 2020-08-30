////////////////////////////////////////////////////////
// ECE 3574, Project 3 - starter code for unit tests
//
#define CATCH_CONFIG_MAIN  // Tells Catch to provide a main() function
#include "catch.hpp"
#include "Interpreter.h"

// This 'run' function is a sample only.  You may use it, modify it, or ignore it.
double run(const std::string & program, std::string & output){

  std::istringstream iss(program);
  Interpreter interp;
  double result;

  bool ok = interp.compute(iss, output);
  if(!ok){
    std::cerr << "Failed to parse: " << program << std::endl;
  }
  REQUIRE(ok == true);

  REQUIRE_NOTHROW(result = interp.topStack());

  return result;
}

TEST_CASE( "Bad inputs", "[interpreter]" ) {
  std::string program;
  std::string out;
  Interpreter interp;
  program = "_5a";
  std::istringstream ss(program);
  REQUIRE(interp.compute(ss, out) == false);

  program = "c";
  ss.str(program);
  interp.compute(ss, out);

  ss.clear();
  program = "_a5";
  ss.str(program);
  REQUIRE(interp.compute(ss, out) == false);

  ss.clear();
  program = "5a";
  ss.str(program);
  REQUIRE(interp.compute(ss, out) == false);

  ss.clear();
  program = "a5";
  ss.str(program);
  REQUIRE(interp.compute(ss, out) == false);

  ss.clear();
  program = "5 :";
  ss.str(program);
  REQUIRE(interp.compute(ss, out) == false);
  (void) out;
}

TEST_CASE( "Test addition with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "3 4 +";
    result = run(program, output);
    REQUIRE(result == 7);
	REQUIRE(output == "");

	program = "1 2 3 4 + 5 6 + + + +";
    result = run(program, output);
    REQUIRE(result == 21);
	REQUIRE(output == "");

  program = "_3 4 +";
    result = run(program, output);
    REQUIRE(result == 1);
	REQUIRE(output == "");

  // program = "6 k 1.234567 2.345678 + p";
  // result = run(program, output);
  // REQUIRE(output == "3.580245\n");
}


TEST_CASE( "Test subtraction with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "3 4 -";
    result = run(program, output);
    REQUIRE(result == -1);
	REQUIRE(output == "");

	program = "1 2 3 4 - 5 6 - - - -";
    result = run(program, output);
    REQUIRE(result == -1);
	REQUIRE(output == "");

  program = "_3 4 -";
    result = run(program, output);
    REQUIRE(result == -7);
	REQUIRE(output == "");

  program = "6 k 1.234567 2.345678 -";
  result = run(program, output);
  REQUIRE(result == -1.111111);
}

TEST_CASE( "Test multiplication with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "3 4 *";
    result = run(program, output);
    REQUIRE(result == 12);
	REQUIRE(output == "");

	program = "1 2 3 4 * 5 6 * * * *";
    result = run(program, output);
    REQUIRE(result == 720);
	REQUIRE(output == "");

  program = "_3 4 *";
    result = run(program, output);
    REQUIRE(result == -12);
	REQUIRE(output == "");

  program = "6 k 1.234567 2.345678 *";
  result = run(program, output);
  REQUIRE(result == 2.895896);
}

TEST_CASE( "Test division with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "12 4 /";
    result = run(program, output);
    REQUIRE(result == 3);
	REQUIRE(output == "");

	program = "3 12 4 / /";
    result = run(program, output);
    REQUIRE(result == 1);
	REQUIRE(output == "");

  program = "_12 4 /";
    result = run(program, output);
    REQUIRE(result == -3);
	REQUIRE(output == "");

  program = "6 k 1.234567 2.345678 /";
  result = run(program, output);
  REQUIRE(result == 0.526315);

  program = "12 0 /";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);
}

TEST_CASE( "Test exponent with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "3 4 ^";
    result = run(program, output);
    REQUIRE(result == 81);
	REQUIRE(output == "");

	program = "2 3 ^ 2 ^";
    result = run(program, output);
    REQUIRE(result == 64);
	REQUIRE(output == "");

  program = "_3 4 ^";
    result = run(program, output);
    REQUIRE(result == 81);
	REQUIRE(output == "");

  program = "6 k 1.234567 2.345678 ^";
  result = run(program, output);
  REQUIRE(result == 1.639320);
}

TEST_CASE( "Test square root with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "16 v";
    result = run(program, output);
    REQUIRE(result == 4);
	REQUIRE(output == "");

	program = "16 v v";
    result = run(program, output);
    REQUIRE(result == 2);
	REQUIRE(output == "");

  program = "6 k 1.234567 v";
  result = run(program, output);
  REQUIRE(result == 1.111110);

  program = "_3 v";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);
}

TEST_CASE( "Test print w/ new line with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "16 p";
    result = run(program, output);
    REQUIRE(result == 16);
	REQUIRE(output == "16\n");

  program = "6 k 1.2345678 p";
  result = run(program, output);
  REQUIRE(output == "1.234567\n");

  program = "p";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test print w/o new line with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "16 n";
    result = run(program, output);
    REQUIRE(result == 16);
	REQUIRE(output == "16");

  program = "6 k 1.2345678 n";
  result = run(program, output);
  REQUIRE(output == "1.234567");

  program = "n";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test print entire stack with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "1 2 3 4 5 6 f";
    result = run(program, output);
    REQUIRE(result == 6);
	REQUIRE(output == "6\n5\n4\n3\n2\n1\n");

  program = "6 k 1.2345678 2.3456789 f";
  result = run(program, output);
  REQUIRE(output == "2.345678\n1.234567\n");
}

TEST_CASE( "Test pop top of stack", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "1 2 P";
    result = run(program, output);
    REQUIRE(result == 1);
	REQUIRE(output == "");

  program = "P";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test clear stack", "[interpreter]" ) {

  std::string program;
  std::string output;
  program = "1 2 3 4 5 6 c";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE(interp.compute(ss, output) == true);
  REQUIRE_THROWS_AS(interp.topStack(), std::runtime_error);
}

TEST_CASE( "Test duplicate top value with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "1 2 3 d";
    result = run(program, output);
    REQUIRE(result == 3);
	REQUIRE(output == "");

  program = "d";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test reverse order of top two elements with default precision", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "1 2 r";
    result = run(program, output);
    REQUIRE(result == 1);
	REQUIRE(output == "");

  program = "1 r";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);

  program = "r";
  ss.clear();
  ss.str(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test current length of stack", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "1 2 3 z";
    result = run(program, output);
    REQUIRE(result == 3);
	REQUIRE(output == "3\n");

  program = "z";
  Interpreter interp;
  std::istringstream ss(program);
  REQUIRE(interp.compute(ss, output) == true);
}

TEST_CASE( "Test simple output cases", "[interpreter]" ) {

    std::string program;
	std::string output;
	double result;

	program = "3 p";
    result = run(program, output);
    REQUIRE(result == 3);
	REQUIRE(output == "3\n");

	program = "4 n";
    result = run(program, output);
    REQUIRE(result == 4);
	REQUIRE(output == "4");

	program = "3 p 4 p + p";
    result = run(program, output);
    REQUIRE(result == 7);
	REQUIRE(output == "3\n4\n7\n");
}

TEST_CASE( "Test precision", "[interpreter]" ) {
    std::string output;
    std::string program = "3 7 * 2 / n";
    double result = run(program, output);
    REQUIRE(result == 10);
    REQUIRE(output == "10");

    program = "1 2 + k c 3 7 * 2 / p";
    result = run(program, output);
    REQUIRE(result == 10.500);
    REQUIRE(output == "10.500\n");

    program = "1 2 + k K 1";
    result = run(program, output);
    REQUIRE(result == 1);
    REQUIRE(output == "3\n");

    program = "k";
    std::istringstream ss(program);
    Interpreter interp;
    REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test calculate number of digits with default precision", "[interpreter]" ) {
    std::string output;
    std::string program = "34 Z p";
    double result = run(program, output);
    REQUIRE(result == 2);
    REQUIRE(output == "2\n");

    program = "3 X";
    result = run(program, output);
    REQUIRE(result == 0);
    REQUIRE(output == "");

    program = "Z";
    std::stringstream ss(program);
    Interpreter interp;
    REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);

    program = "X";
    ss.clear();
    ss.str(program);
    REQUIRE_THROWS_AS(interp.compute(ss, output), std::runtime_error);
}

TEST_CASE( "Test euler number with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "e";
  double result = run(program, output);
  REQUIRE(result == 2);
  REQUIRE(output == "");

  program = "3 k e";
  result = run(program, output);
  REQUIRE(result == 2.718);
  REQUIRE(output == "");

  program = "6 k e";
  result = run(program, output);
  REQUIRE(result == 2.718281);
}

TEST_CASE( "Test PI with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "i";
  double result = run(program, output);
  REQUIRE(result == 3);
  REQUIRE(output == "");

  program = "2 k i";
  result = run(program, output);
  REQUIRE(result == 3.14);
  REQUIRE(output == "");

  program = "6 k i";
  result = run(program, output);
  REQUIRE(result == 3.141592);
}

TEST_CASE( "Test log base 10 with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "100 g";
  double result = run(program, output);
  REQUIRE(result == 2);
  REQUIRE(output == "");

  program = "3 k 2 g";
  result = run(program, output);
  REQUIRE(result == 0.301);
  REQUIRE(output == "");

  program = "6 k 1.234567 g";
  result = run(program, output);
  REQUIRE(result == 0.091514);

  program = "0 g";
  std::stringstream ss(program);
  Interpreter interp;
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);

  program = "_1 g";
  ss.clear();
  ss.str(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);
}

TEST_CASE( "Test natural log with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "100 l";
  double result = run(program, output);
  REQUIRE(result == 4);
  REQUIRE(output == "");

  program = "3 k 2 l";
  result = run(program, output);
  REQUIRE(result == 0.693);
  REQUIRE(output == "");

  program = "6 k 1.234567 l";
  result = run(program, output);
  REQUIRE(result == 0.210720);

  program = "0 l";
  std::stringstream ss(program);
  Interpreter interp;
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);

  program = "_1 l";
  ss.clear();
  ss.str(program);
  REQUIRE_THROWS_AS(interp.compute(ss, output), std::invalid_argument);
}

TEST_CASE( "Test sin with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "0.5 s";
  double result = run(program, output);
  REQUIRE(result == 0);
  REQUIRE(output == "");

  program = "3 k 0.5 s";
  result = run(program, output);
  REQUIRE(result == 0.479);
  REQUIRE(output == "");

  program = "6 k 1.234567 s";
  result = run(program, output);
  REQUIRE(result == 0.944005);
}

TEST_CASE( "Test cos with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "0.5 o";
  double result = run(program, output);
  REQUIRE(result == 0);
  REQUIRE(output == "");

  program = "3 k 0.5 o";
  result = run(program, output);
  REQUIRE(result == 0.877);
  REQUIRE(output == "");

  program = "6 k 1.234567 o";
  result = run(program, output);
  REQUIRE(result == 0.329929);
}

TEST_CASE( "Test tan with default precision", "[interpreter]" ) {
  std::string output;
  std::string program = "0.5 a";
  double result = run(program, output);
  REQUIRE(result == 0);
  REQUIRE(output == "");

  program = "3 k 0.5 a";
  result = run(program, output);
  REQUIRE(result == 0.546);
  REQUIRE(output == "");

  program = "6 k 1.234567 a";
  result = run(program, output);
  REQUIRE(result == 2.861230);
}
