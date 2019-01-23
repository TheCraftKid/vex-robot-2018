# Foxbot Tests

### About
These developer-monitored tests are designed to provide a consistent group of
checks to ensure code doesn't unintentionally break key robot functionality.

Tests are divided by module, as described by the [docs](https://williecubed.github.io/vex-foxbot/architecture.md).

### How to use
Connect a VEXNet Competition Switch to your controller using a standard RJ-45 cable. Make sure it is in driver mode and that it is disabled.

Open `main_test.cpp` in the ROBOTC IDE. Download it to the robot and use
this chart to run each test suite:

[TODO: Test code chart]

Pressing each code on the robot runs a particular test, like testing movement. Each test takes 

Pressing all four bumpers on the back of the remote (`Btn6U`, `Btn5U`, `Btn6D`,
`Btn5D`) will immediately abort the test in progress just in case something goes awry.