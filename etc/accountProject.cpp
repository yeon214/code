#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class account {
private:
	string accountName; //예금주 이름
	int originalMoney = 0, accountNumber = 9210204, transferFee = 500, money; //잔액, 계좌번호, 이체 수수료
	double interestRate = 10.0; //이자율
	int moneyPlus() {
		cin >> money;
		originalMoney += money;
		return originalMoney;
	}
	int moneyMinus() {
		cin >> money;
		originalMoney -= (money + 500);
		return originalMoney;
	}
public :
	account() {
		cin >> accountName;
	}
	string accountNameOutput(){ return accountName; }
	int accountNumberOutput() { return accountNumber; }
	int originalMoney_Plus_InterestRate_Output() {
		if (originalMoney >= 10000) { return originalMoney + originalMoney / interestRate; }
		else return originalMoney;
	}
	int moneyPlusOutput() { return moneyPlus(); }
	int moneyMinusOutput() { return moneyMinus(); }
};
int main(void){
	cout << "고객님의 성함을 입력해 주세요: ";
	account customer;
	int choice, theOtherPersonAccount;
	cout << "이름: " << customer.accountNameOutput() << endl;
	cout << "계좌번호: " << customer.accountNumberOutput() << endl;
	cout << "잔액: " << customer.originalMoney_Plus_InterestRate_Output() << endl;
	cout << "10,000원 이상 예치 시, 단리 방식으로 10% 이자가 적용됩니다." << endl;
	cout << "많은 이용 바랍니다. 감사합니다.\n\n";
	while (1) {
		cout << "1. 입금\n2. 출금\n3. 잔액 조회\n4. 종료\n\n";
		cout << "원하시는 번호를 입력해 주세요.\n\n";
		cin >> choice;
		if (choice == 1) {
			cout << "입금할 금액을 입력해 주세요: ";
			customer.moneyPlusOutput();
			cout << "현재 잔액: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 2) {
			cout << "이체할 계좌번호를 입력해 주세요: ";
			cin >> theOtherPersonAccount;
			cout << "출금할 금액을 입력해 주세요: ";
			customer.moneyMinusOutput();
			cout << "이체 수수료 500원이 부과되었습니다.\n";
			cout << "현재 잔액: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 3) {
			cout << "현재 잔액: " << customer.originalMoney_Plus_InterestRate_Output() << endl << endl;
		}
		else if (choice == 4) {
			cout << "이용해주셔서 감사합니다.";
			return 0;
		}
		else cout << "번호를 잘 못 입력하셨습니다. 다시 입력해주세요.\n\n";
	}
}