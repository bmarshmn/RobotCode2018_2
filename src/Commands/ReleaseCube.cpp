#include "ReleaseCube.h"

ReleaseCube::ReleaseCube() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void ReleaseCube::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ReleaseCube::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseCube::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ReleaseCube::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseCube::Interrupted() {

}
