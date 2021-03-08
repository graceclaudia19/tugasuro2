inline
/*FUNGSI OPERASI INTEGRAL RIEMANN*/
/*test case: 
Integral dari 2 sampai 10 fungsi y=4x^4+3x^3+2x^2+x+10
INPUT:
- Batas bawah: 2
- Batas atas: 10
- Banyak parsial/bagian: 4
- Derajat persamaan: 4
- Koefisien x^4: 4
- Koefisien x^3: 3
- Koefisien x^2: 2
- Koefisien x^1: 1
- Koefisien x^0: 10
OUTPUT:93824
*/
int integral(){
	int a,b,n, pangkat;
	double koef,hasily;
	/*memasukkan batas bawah integral*/
	cout<<"Masukkan batas bawah: ";
	cin>>a;
	/*memasukkan batas atas integral*/
	cout<<"Masukkan batas atas: ";
	cin>>b;
	/*memasukkan banyak bagian */
	cout<<"Banyak parsial/bagian: ";
	cin>>n;
	/*memasukkan derajat persamaan dari fungsi yang diberikan*/
	cout<<"Derajat persamaan:";
	cin>>pangkat;
	/*vector untuk koefisien pada masing-masing derajat x pada fungsi sampai x^0 */
	vector<double> koeff;
	for (int i=pangkat;i>=0;i--){
		cout<<"Masukkan koefisien x^"<<i<<": ";
		cin>>koef;
		koeff.push_back(koef);
	}
	/*vector untuk x*/
	vector<double> x;
	for (int i=a;i<=b;i=i+((b-a)/n)){
		x.push_back(i);
	}
	/*vector untuk y*/
	vector<double> y;
	for (int i=0;i<x.size();i++){
		int jumlahy=0;
		for (int j=0;j<x.size();j++){
			if (x.size()!=j){
				hasily=koeff[j]*pow(x[i],(x.size()-(j+1)));
			}
			else{
				hasily=koeff[j];
			}
			jumlahy=jumlahy+hasily;
		}
		y.push_back(jumlahy);
	}
	/*total untuk area*/
	double total;
	for (int i=0;i<n;i++){
		total+=((x[i+1])-x[i])*(y[i]+y[i+1])/2;
	}
	cout<<"hasil: "<<total<<"\n";
}
