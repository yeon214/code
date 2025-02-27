#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Account_ {
private:
	string accountName; //예금주 이름 => 초기 생성자에서 
	int originalMoney = 0, accountNumber, transferFee; //잔액, 계좌번호, 이체 수수료
	double interestRate = 10.0; //이자율
	int money_plus(int _money) {
		originalMoney += _money;
		return originalMoney;
	}
	int money_minus(int _money) {
		if (originalMoney - (_money + 500) < 0) {
			cout << "잔액이 부족합니다.\n";
			return 0;
		}
		originalMoney -= (_money + 500);
		cout << "이체 수수료 500원이 부과되었습니다.\n";
		return originalMoney;
	}
public :
	/**예금주 이름을 넣어서 생성*/
	Account_(int accountNumber) {
		//클래스 생성에 필요한 값을 초기화 한다.
		cin >> accountName;
		this->originalMoney = 0;
		this->accountNumber = accountNumber;
		this->transferFee = 500;
	}
	string account_name_output(){ return accountName; }
	int account_number_output() { return accountNumber; }
	int originalMoney_plus_interestRate_output() {
		if (originalMoney >= 10000) { return originalMoney + originalMoney / interestRate; }
		return originalMoney;
	}
	int money_plus_output(int _money) { return money_plus(_money); }
	int money_minus_output(int _money) { return money_minus(_money); }
};
int main(void){
	int choice, money;
	string whoIsIt; //기능 사용할 때 이름 확인하는 변수
	cout << "첫번째 통장을 먼저 개설하겠습니다. 성함을 입력해주세요 : ";
	Account_ customer_constructor(9210204);
	cout << "이름: " << customer_constructor.account_name_output() << "\n";
	cout << "계좌번호: " << customer_constructor.account_number_output() << "\n";
	cout << "잔액: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n";
	cout << "10,000원 이상 예치 시, 단리 방식으로 10% 이자가 적용됩니다." << "\n\n";

	cout << "두번째 통장을 먼저 개설하겠습니다. 성함을 입력해주세요 : ";
	Account_ customer_constructor_2(3929101);
	cout << "이름: " << customer_constructor_2.account_name_output() << "\n";
	cout << "계좌번호: " << customer_constructor_2.account_number_output() << "\n";
	cout << "잔액: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n";
	cout << "10,000원 이상 예치 시, 단리 방식으로 10% 이자가 적용됩니다." << "\n\n";

	while (1) {
		cout << "이름을 입력해주세요 : ";
		cin >> whoIsIt;
		if (whoIsIt == customer_constructor.account_name_output()) {
			cout << "1. 입금\n2. 출금\n3. 잔액 조회\n4. 종료\n\n";
			cout << "원하시는 번호를 입력해 주세요.\n\n";
			cin >> choice;
			if (choice == 1) {
				cout << "입금할 금액을 입력해 주세요: ";
				cin >> money;
				customer_constructor.money_plus_output(money);
				cout << "현재 잔액: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 2) {
				cout << "이체해드릴 분의 이름을 입력해 주세요: ";
				cin >> whoIsIt;
				if (whoIsIt == customer_constructor.account_name_output()) {
					cout << "본인 계좌입니다. 다시 입력해주세요. \n";
				}
				else if (whoIsIt == customer_constructor_2.account_name_output()) {
					cout << "출금할 금액을 입력해 주세요: ";
					cin >> money;
					customer_constructor.money_minus_output(money);
					customer_constructor_2.money_plus_output(money);
					cout << "현재 잔액: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
				}
				else cout << "잘못 입력하셨습니다. 다시 입력해 주세요.\n\n";
			}
			else if (choice == 3) {
				cout << "현재 잔액: " << customer_constructor.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 4) {
				cout << "이용해주셔서 감사합니다.";
				return 0;
			}
			else cout << "번호를 잘못 입력하셨습니다. 다시 입력해 주세요.\n\n";
		}
		else if (whoIsIt == customer_constructor_2.account_name_output()) {
			cout << "1. 입금\n2. 출금\n3. 잔액 조회\n4. 종료\n\n";
			cout << "원하시는 번호를 입력해 주세요.\n\n";
			cin >> choice;
			if (choice == 1) {
				cout << "입금할 금액을 입력해 주세요: ";
				cin >> money;
				customer_constructor_2.money_plus_output(money);
				cout << "현재 잔액: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 2) {
				cout << "이체해드릴 분의 이름을 입력해 주세요: ";
				cin >> whoIsIt;
				if (whoIsIt == customer_constructor_2.account_name_output()) {
					cout << "본인 계좌입니다. 다시 입력해주세요. \n";
				}
				else if (whoIsIt == customer_constructor.account_name_output()) {
					cout << "출금할 금액을 입력해 주세요: ";
					cin >> money;
					customer_constructor_2.money_minus_output(money);
					customer_constructor.money_plus_output(money);
					cout << "현재 잔액: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
				}
				else cout << "잘못 입력하셨습니다. 다시 입력해 주세요.\n";
			}
			else if (choice == 3) {
				cout << "현재 잔액: " << customer_constructor_2.originalMoney_plus_interestRate_output() << "\n\n";
			}
			else if (choice == 4) {
				cout << "이용해주셔서 감사합니다.";
				return 0;
			}
			else cout << "번호를 잘못 입력하셨습니다. 다시 입력해 주세요.\n\n";
		}
		else {
			cout << "잘못 입력하셨습니다. 다시 입력해 주세요.\n";
		}
	}
}