//Mushfiqur Rahman
#include <iostream>
using namespace std;

int main() {
	double distance;
	int completedDeliveries = 0;
	int deliveryFees = 0;

	cout << "Enter the delivery distance in miles (0 to stop): ";
	cin >> distance;

	while (distance != 0) {
		if (distance < 0) {
			cout << "Invalid distance." << endl;
		} else {
			int currentFee = 0;
			if (distance < 3) {
				currentFee = 5;
			} else if (distance >= 3 && distance < 7) {
				currentFee = 8;
			} else if (distance >= 7) {
				currentFee = 12;
			}

			completedDeliveries++;
			deliveryFees += currentFee;

			cout << "Delivery fee earned: $" << currentFee << endl;
			cout << "Completed Deliveries so far: " << completedDeliveries << endl;
			cout << "Total delivery fees earned so far: $" << deliveryFees << endl;
		}

		cout << "Enter the delivery distance in miles (0 to stop): ";
		cin >> distance;
	}

	cout <<"Number of completed deliveries: " << completedDeliveries << endl;
	cout << "Total delivery fees earned: $" << deliveryFees << endl;

	return 0;

}


