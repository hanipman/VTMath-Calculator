///////////////////////////////////////////////////////
// ECE 3574, Project 3 starter code
//
#include <QTest>

#include "vtqulator_gui.h"

class TestVtqulator : public QObject {
  Q_OBJECT

private slots:

  void findObjects();
  void testUnit();
  void testAdd();
  void testMinus();
  void testMultiply();
  void testDivide();
  void testExponent();
  void testSquareRoot();
  void testPrint();
  void testPrintn();
  void testPrintf();
  void testPop();
  void testClear();
  void testDuplicate();
  void testReverse();
  void testLength();
  void testPrecision();
  void testNumDigits();
  void testEuler();
  void testPi();
  void testLog();
  void testLn();
  void testSin();
  void testCos();
  void testTan();
  void testTemp();
  void testVTmathCheckBox();

private:
	VtqulatorGui gui;
};

void TestVtqulator::findObjects() {
  auto plus_button = gui.findChild<QPushButton *>("Pushbutton_plus");
  QVERIFY2(plus_button, "Could not find widget with name: 'Pushbutton_plus'");

  auto minus_button = gui.findChild<QPushButton *>("Pushbutton_minus");
  QVERIFY2(minus_button, "Could not find widget with name: 'Pushbutton_minus'");

  auto multiply_button = gui.findChild<QPushButton *>("Pushbutton_multiply");
  QVERIFY2(multiply_button, "Could not find widget with name: 'Pushbutton_multiply'");

  auto divide_button = gui.findChild<QPushButton *>("Pushbutton_divide");
  QVERIFY2(divide_button, "Could not find widget with name: 'Pushbutton_divide'");

  auto power_button = gui.findChild<QPushButton *>("Pushbutton_power");
  QVERIFY2(power_button, "Could not find widget with name: 'Pushbutton_power'");

  auto squareroot_button = gui.findChild<QPushButton *>("Pushbutton_squareroot");
  QVERIFY2(squareroot_button, "Could not find widget with name: 'Pushbutton_squareroot'");

  auto log_button = gui.findChild<QPushButton *>("Pushbutton_log");
  QVERIFY2(log_button, "Could not find widget with name: 'Pushbutton_log'");

  auto ln_button = gui.findChild<QPushButton *>("Pushbutton_ln");
  QVERIFY2(ln_button, "Could not find widget with name: 'Pushbutton_ln'");

  auto sin_button = gui.findChild<QPushButton *>("Pushbutton_sin");
  QVERIFY2(sin_button, "Could not find widget with name: 'Pushbutton_sin'");

  auto cos_button = gui.findChild<QPushButton *>("Pushbutton_cos");
  QVERIFY2(cos_button, "Could not find widget with name: 'Pushbutton_cos'");

  auto tan_button = gui.findChild<QPushButton *>("Pushbutton_tan");
  QVERIFY2(tan_button, "Could not find widget with name: 'Pushbutton_tan'");

  auto e_button = gui.findChild<QPushButton *>("Pushbutton_e");
  QVERIFY2(e_button, "Could not find widget with name: 'Pushbutton_e'");

  auto pi_button = gui.findChild<QPushButton *>("Pushbutton_pi");
  QVERIFY2(pi_button, "Could not find widget with name: 'Pushbutton_pi'");

  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  QVERIFY2(p_button, "Could not find widget with name: 'Pushbutton_p'");

  auto n_button = gui.findChild<QPushButton *>("Pushbutton_n");
  QVERIFY2(n_button, "Could not find widget with name: 'Pushbutton_n'");

  auto f_button = gui.findChild<QPushButton *>("Pushbutton_f");
  QVERIFY2(f_button, "Could not find widget with name: 'Pushbutton_f'");

  auto P_button = gui.findChild<QPushButton *>("Pushbutton_P");
  QVERIFY2(P_button, "Could not find widget with name: 'Pushbutton_P'");

  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  QVERIFY2(c_button, "Could not find widget with name: 'Pushbutton_c'");

  auto d_button = gui.findChild<QPushButton *>("Pushbutton_d");
  QVERIFY2(d_button, "Could not find widget with name: 'Pushbutton_d'");

  auto r_button = gui.findChild<QPushButton *>("Pushbutton_r");
  QVERIFY2(r_button, "Could not find widget with name: 'Pushbutton_r'");

  auto z_button = gui.findChild<QPushButton *>("Pushbutton_z");
  QVERIFY2(z_button, "Could not find widget with name: 'Pushbutton_z'");

  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  QVERIFY2(k_button, "Could not find widget with name: 'Pushbutton_k'");

  auto K_button = gui.findChild<QPushButton *>("Pushbutton_K");
  QVERIFY2(K_button, "Could not find widget with name: 'Pushbutton_K'");

  auto Z_button = gui.findChild<QPushButton *>("Pushbutton_Z");
  QVERIFY2(Z_button, "Could not find widget with name: 'Pushbutton_Z'");

  auto X_button = gui.findChild<QPushButton *>("Pushbutton_X");
  QVERIFY2(X_button, "Could not find widget with name: 'Pushbutton_X'");

  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  QVERIFY2(num_0_button, "Could not find widget with name: 'Pushbutton_0'");

  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  QVERIFY2(num_1_button, "Could not find widget with name: 'Pushbutton_1'");

  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  QVERIFY2(num_2_button, "Could not find widget with name: 'Pushbutton_2'");

  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  QVERIFY2(num_3_button, "Could not find widget with name: 'Pushbutton_3'");

  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  QVERIFY2(num_4_button, "Could not find widget with name: 'Pushbutton_4'");

  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  QVERIFY2(num_5_button, "Could not find widget with name: 'Pushbutton_5'");

  auto num_6_button = gui.findChild<QPushButton *>("Pushbutton_6");
  QVERIFY2(num_6_button, "Could not find widget with name: 'Pushbutton_6'");

  auto num_7_button = gui.findChild<QPushButton *>("Pushbutton_7");
  QVERIFY2(num_7_button, "Could not find widget with name: 'Pushbutton_7'");

  auto num_8_button = gui.findChild<QPushButton *>("Pushbutton_8");
  QVERIFY2(num_8_button, "Could not find widget with name: 'Pushbutton_8'");

  auto num_9_button = gui.findChild<QPushButton *>("Pushbutton_9");
  QVERIFY2(num_9_button, "Could not find widget with name: 'Pushbutton_9'");

  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  QVERIFY2(sign_button, "Could not find widget with name: 'Pushbutton_sign'");

  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  QVERIFY2(dot_button, "Could not find widget with name: 'Pushbutton_dot'");

  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  QVERIFY2(space_button, "Could not find widget with name: 'Pushbutton_space'");

  auto backspace_button = gui.findChild<QPushButton *>("Pushbutton_backspace");
  QVERIFY2(backspace_button, "Could not find widget with name: 'Pushbutton_backspace'");

  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");
  QVERIFY2(return_button, "Could not find widget with name: 'Pushbutton_return'");

  auto outputWindow = gui.findChild<QPlainTextEdit *>("Output_window");
  QVERIFY2(outputWindow, "Could not find widget with name: 'Output_window'");

  auto degree_button = gui.findChild<QRadioButton *>("Radiobutton_degree");
  QVERIFY2(degree_button, "Could not find widget with name: 'Radiobutton_degree'");

  auto radian_button = gui.findChild<QRadioButton *>("Radiobutton_radian");
  QVERIFY2(radian_button, "Could not find widget with name: 'Radiobutton_radian'");

  auto precision_label = gui.findChild<QLabel *>("Label_precision");
  QVERIFY2(precision_label, "Could not find widget with name: 'Label_precision'");

  auto vtmath_checkbox = gui.findChild<QCheckBox *>("Mode_Normal_VTmath");
  QVERIFY2(vtmath_checkbox, "Could not find widget with name: 'Label_precision'");

  // Testing backspace here and keyboard inputs

  QTest::keyClick(plus_button, Qt::Key_Plus);
  QTest::keyClick(minus_button, Qt::Key_Minus);
  QTest::keyClick(multiply_button, Qt::Key_Asterisk);
  QTest::keyClick(divide_button, Qt::Key_Slash);
  QTest::keyClick(power_button, Qt::Key_AsciiCircum);
  QTest::keyClick(squareroot_button, Qt::Key_V);
  QTest::keyClick(log_button, Qt::Key_G);
  QTest::keyClick(ln_button, Qt::Key_L);
  QTest::keyClick(sin_button, Qt::Key_S);
  QTest::keyClick(cos_button, Qt::Key_O);
  QTest::keyClick(tan_button, Qt::Key_A);
  QTest::keyClick(e_button, Qt::Key_E);
  QTest::keyClick(pi_button, Qt::Key_I);
  QTest::keyClick(p_button, Qt::Key_P);
  QTest::keyClick(n_button, Qt::Key_N);
  QTest::keyClick(f_button, Qt::Key_F);
  QTest::keyClick(P_button, Qt::Key_P, Qt::ShiftModifier);
  QTest::keyClick(c_button, Qt::Key_C);
  QTest::keyClick(d_button, Qt::Key_D);
  QTest::keyClick(r_button, Qt::Key_R);
  QTest::keyClick(z_button, Qt::Key_Z);
  QTest::keyClick(k_button, Qt::Key_K);
  QTest::keyClick(K_button, Qt::Key_K, Qt::ShiftModifier);
  QTest::keyClick(Z_button, Qt::Key_Z, Qt::ShiftModifier);
  QTest::keyClick(X_button, Qt::Key_X, Qt::ShiftModifier);
  QTest::keyClick(num_0_button, Qt::Key_0);
  QTest::keyClick(num_1_button, Qt::Key_1);
  QTest::keyClick(num_2_button, Qt::Key_2);
  QTest::keyClick(num_3_button, Qt::Key_3);
  QTest::keyClick(num_4_button, Qt::Key_4);
  QTest::keyClick(num_5_button, Qt::Key_5);
  QTest::keyClick(num_6_button, Qt::Key_6);
  QTest::keyClick(num_7_button, Qt::Key_7);
  QTest::keyClick(num_8_button, Qt::Key_8);
  QTest::keyClick(num_9_button, Qt::Key_9);
  QTest::keyClick(sign_button, Qt::Key_Underscore);
  QTest::keyClick(dot_button, Qt::Key_Period);
  QTest::keyClick(space_button, Qt::Key_Space);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
  QTest::keyClick(backspace_button, Qt::Key_Backspace);
}

void TestVtqulator::testUnit() {
  auto deg_button = gui.findChild<QRadioButton *>("Radiobutton_degree");
  auto rad_button = gui.findChild<QRadioButton *>("Radiobutton_radian");
  QVERIFY(gui.getUnit() == 1);

  QTest::mouseClick(rad_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 0);

  QTest::mouseClick(deg_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 1);
}

void TestVtqulator::testAdd() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto plus_button = gui.findChild<QPushButton *>("Pushbutton_plus");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(plus_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 7);
  QVERIFY(gui.getOutput() == "7\n");

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(plus_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 1);
  QVERIFY(gui.getOutput() == "1\n");
}

void TestVtqulator::testMinus() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto minus_button = gui.findChild<QPushButton *>("Pushbutton_minus");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(minus_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -1);

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(minus_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -7);
}

void TestVtqulator::testMultiply() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto multiply_button = gui.findChild<QPushButton *>("Pushbutton_multiply");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(multiply_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 12);

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(multiply_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -12);
}

void TestVtqulator::testDivide() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto divide_button = gui.findChild<QPushButton *>("Pushbutton_divide");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3);

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -3);

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testExponent() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto power_button = gui.findChild<QPushButton *>("Pushbutton_power");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(power_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 81);

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(power_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 81);
}

void TestVtqulator::testSquareRoot() {
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_6_button = gui.findChild<QPushButton *>("Pushbutton_6");
  auto squareroot_button = gui.findChild<QPushButton *>("Pushbutton_squareroot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(squareroot_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 4);

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(squareroot_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(squareroot_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 2);

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(squareroot_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testPrint() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  // QVERIFY(gui.getOutput() == "34");
  QVERIFY(gui.getOutput() == "34\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testPrintn() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto n_button = gui.findChild<QPushButton *>("Pushbutton_n");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(n_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "34");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(n_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testPrintf() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto f_button = gui.findChild<QPushButton *>("Pushbutton_f");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(f_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "4\n3\n");
}

void TestVtqulator::testPop() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto P_button = gui.findChild<QPushButton *>("Pushbutton_P");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(P_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "3\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(P_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testClear() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto z_button = gui.findChild<QPushButton *>("Pushbutton_z");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(z_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "0\n");
}

void TestVtqulator::testDuplicate() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto d_button = gui.findChild<QPushButton *>("Pushbutton_d");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto f_button = gui.findChild<QPushButton *>("Pushbutton_f");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(d_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(f_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "4\n4\n3\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(d_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testReverse() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto r_button = gui.findChild<QPushButton *>("Pushbutton_r");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto f_button = gui.findChild<QPushButton *>("Pushbutton_f");
  auto P_button = gui.findChild<QPushButton *>("Pushbutton_P");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(r_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(f_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "3\n4\n");

  QTest::mouseClick(P_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(r_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(r_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testLength() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto z_button = gui.findChild<QPushButton *>("Pushbutton_z");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(z_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "2\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(z_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "0\n");
}

void TestVtqulator::testPrecision() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto divide_button = gui.findChild<QPushButton *>("Pushbutton_divide");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");
  auto precision_label = gui.findChild<QLabel *>("Label_precision");

  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "1\n");
  QVERIFY(precision_label->text() == "0");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "1.333\n");
  QVERIFY(precision_label->text() == "3");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  // change precision back
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testNumDigits() {
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_4_button = gui.findChild<QPushButton *>("Pushbutton_4");
  auto Z_button = gui.findChild<QPushButton *>("Pushbutton_Z");
  auto X_button = gui.findChild<QPushButton *>("Pushbutton_X");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(Z_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "2\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(num_4_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(X_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "0\n");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(Z_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(c_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(X_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");
}

void TestVtqulator::testEuler() {
  auto num_6_button = gui.findChild<QPushButton *>("Pushbutton_6");
  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto plus_button = gui.findChild<QPushButton *>("Pushbutton_plus");
  auto divide_button = gui.findChild<QPushButton *>("Pushbutton_divide");
  auto power_button = gui.findChild<QPushButton *>("Pushbutton_power");
  auto e_button = gui.findChild<QPushButton *>("Pushbutton_e");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 2);

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 2.718281);
  QVERIFY(gui.getOutput() == "2.718281\n");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(plus_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3);
  QVERIFY(gui.getOutput() == "3\n");

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(plus_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3.718281);
  QVERIFY(gui.getOutput() == "3.718281\n");

  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(divide_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 1.35);
  QVERIFY(gui.getOutput() == "1.35\n");

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(e_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(power_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 2.718281);
  QVERIFY(gui.getOutput() == "2.718281\n");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testPi() {
  auto num_6_button = gui.findChild<QPushButton *>("Pushbutton_6");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto plus_button = gui.findChild<QPushButton *>("Pushbutton_plus");
  auto power_button = gui.findChild<QPushButton *>("Pushbutton_power");
  auto pi_button = gui.findChild<QPushButton *>("Pushbutton_pi");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3);

  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3.14);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3.141);
  QVERIFY(gui.getOutput() == "3.141\n");

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3.141592);
  QVERIFY(gui.getOutput() == "3.141592\n");

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(plus_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 4.141592);
  QVERIFY(gui.getOutput() == "4.141592\n");

  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(pi_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(power_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 3.141592);
  QVERIFY(gui.getOutput() == "3.141592\n");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testLog() {
  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto g_button = gui.findChild<QPushButton *>("Pushbutton_log");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 2);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.301);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -0.3);
  QVERIFY(gui.getOutput() == "-0.3\n");

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(g_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -0.903);
  QVERIFY(gui.getOutput() == "-0.903\n");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testLn() {
  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_2_button = gui.findChild<QPushButton *>("Pushbutton_2");
  auto num_1_button = gui.findChild<QPushButton *>("Pushbutton_1");
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto l_button = gui.findChild<QPushButton *>("Pushbutton_ln");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 4);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.693);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getOutput() == "");

  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -1.38);
  QVERIFY(gui.getOutput() == "-1.38\n");

  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_1_button, Qt::LeftButton);
  QTest::mouseClick(num_2_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(l_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == -2.07944);
  QVERIFY(gui.getOutput() == "-2.07944\n");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testSin() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  auto sin_button = gui.findChild<QPushButton *>("Pushbutton_sin");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(sin_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(sin_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.008);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  auto rad_button = gui.findChild<QRadioButton *>("Radiobutton_radian");
  QTest::mouseClick(rad_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 0);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(sin_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(sin_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.479);

  auto deg_button = gui.findChild<QRadioButton *>("Radiobutton_degree");
  QTest::mouseClick(deg_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 1);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testCos() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  auto cos_button = gui.findChild<QPushButton *>("Pushbutton_cos");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(cos_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(cos_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.999);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  auto rad_button = gui.findChild<QRadioButton *>("Radiobutton_radian");
  QTest::mouseClick(rad_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 0);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(cos_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(cos_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.877);

  auto deg_button = gui.findChild<QRadioButton *>("Radiobutton_degree");
  QTest::mouseClick(deg_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 1);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testTan() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_3_button = gui.findChild<QPushButton *>("Pushbutton_3");
  auto num_5_button = gui.findChild<QPushButton *>("Pushbutton_5");
  auto tan_button = gui.findChild<QPushButton *>("Pushbutton_tan");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(tan_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(tan_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.008);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);

  auto rad_button = gui.findChild<QRadioButton *>("Radiobutton_radian");
  QTest::mouseClick(rad_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 0);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(tan_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);

  QTest::mouseClick(num_3_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(dot_button, Qt::LeftButton);
  QTest::mouseClick(num_5_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(tan_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0.546);

  auto deg_button = gui.findChild<QRadioButton *>("Radiobutton_degree");
  QTest::mouseClick(deg_button, Qt::LeftButton);
  QVERIFY(gui.getUnit() == 1);

  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(k_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
}

void TestVtqulator::testTemp() {
  auto num_0_button = gui.findChild<QPushButton *>("Pushbutton_0");
  auto num_6_button = gui.findChild<QPushButton *>("Pushbutton_6");
  auto multiply_button = gui.findChild<QPushButton *>("Pushbutton_multiply");
  auto p_button = gui.findChild<QPushButton *>("Pushbutton_p");
  auto sign_button = gui.findChild<QPushButton *>("Pushbutton_sign");
  auto space_button = gui.findChild<QPushButton *>("Pushbutton_space");
  auto return_button = gui.findChild<QPushButton *>("Pushbutton_return");

  QTest::mouseClick(sign_button, Qt::LeftButton);
  QTest::mouseClick(num_6_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(num_0_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(multiply_button, Qt::LeftButton);
  QTest::mouseClick(space_button, Qt::LeftButton);
  QTest::mouseClick(p_button, Qt::LeftButton);
  QTest::mouseClick(return_button, Qt::LeftButton);
  QVERIFY(gui.getResult() == 0);
  QVERIFY(gui.getOutput() == "0\n");
}

void TestVtqulator::testVTmathCheckBox() {
  auto vtmath_checkbox = gui.findChild<QCheckBox *>("Mode_Normal_VTmath");
  auto squareroot_button = gui.findChild<QPushButton *>("Pushbutton_squareroot");
  auto log_button = gui.findChild<QPushButton *>("Pushbutton_log");
  auto ln_button = gui.findChild<QPushButton *>("Pushbutton_ln");
  auto sin_button = gui.findChild<QPushButton *>("Pushbutton_sin");
  auto cos_button = gui.findChild<QPushButton *>("Pushbutton_cos");
  auto tan_button = gui.findChild<QPushButton *>("Pushbutton_tan");
  auto e_button = gui.findChild<QPushButton *>("Pushbutton_e");
  auto pi_button = gui.findChild<QPushButton *>("Pushbutton_pi");
  auto c_button = gui.findChild<QPushButton *>("Pushbutton_c");
  auto k_button = gui.findChild<QPushButton *>("Pushbutton_k");
  auto K_button = gui.findChild<QPushButton *>("Pushbutton_K");
  auto X_button = gui.findChild<QPushButton *>("Pushbutton_X");
  auto dot_button = gui.findChild<QPushButton *>("Pushbutton_dot");

  QTest::mouseClick(vtmath_checkbox, Qt::LeftButton);
  QVERIFY(vtmath_checkbox->isChecked());
  QVERIFY(!squareroot_button->isEnabled());
  QVERIFY(!log_button->isEnabled());
  QVERIFY(!ln_button->isEnabled());
  QVERIFY(!sin_button->isEnabled());
  QVERIFY(!cos_button->isEnabled());
  QVERIFY(!tan_button->isEnabled());
  QVERIFY(!e_button->isEnabled());
  QVERIFY(!pi_button->isEnabled());
  QVERIFY(!c_button->isEnabled());
  QVERIFY(!k_button->isEnabled());
  QVERIFY(!K_button->isEnabled());
  QVERIFY(!X_button->isEnabled());
  QVERIFY(!dot_button->isEnabled());

  QTest::mouseClick(vtmath_checkbox, Qt::LeftButton);
  QVERIFY(!vtmath_checkbox->isChecked());
  QVERIFY(squareroot_button->isEnabled());
  QVERIFY(log_button->isEnabled());
  QVERIFY(ln_button->isEnabled());
  QVERIFY(sin_button->isEnabled());
  QVERIFY(cos_button->isEnabled());
  QVERIFY(tan_button->isEnabled());
  QVERIFY(e_button->isEnabled());
  QVERIFY(pi_button->isEnabled());
  QVERIFY(c_button->isEnabled());
  QVERIFY(k_button->isEnabled());
  QVERIFY(K_button->isEnabled());
  QVERIFY(X_button->isEnabled());
  QVERIFY(dot_button->isEnabled());
}

QTEST_MAIN(TestVtqulator)
#include "test_vtqulator.moc"
