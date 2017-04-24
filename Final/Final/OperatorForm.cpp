#include "OperatorForm.h"
#include "CStudent.h"
#include "CQuestion.h"
#include "CQuiz.h"
#include <string>
using namespace EduGame;
using namespace std;
[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CStudent * student = new CStudent("Carlos", "12");
	student->setContact(new CContactInfo("Sunset", "111111111", "magic@mdc.edu"));
	
	CQuestion *questions = new CQuestion[6];
	for (int i = 0; i < 6; i++) {
		questions[i].setTitle("Question " + std::to_string(i));
		questions[i].setPoints(10);
		questions[i].setDescription("Which one is correct in describing the constructor in object-oriented programming");
		questions[i].setOption(0, "Only one constructor is allowed.");
		questions[i].setOption(1, "Constructor is used to initialize the object.");
		questions[i].setAnswer("B");
		questions[i].setExplanation("B is correct");
	}
	CQuiz * quiz = new CQuiz();
	for (int i = 0; i < 6; i++) {
		quiz->addQuestion(questions[i]);
	}

	OperatorForm form(student, quiz);
	Application::Run(%form);
}