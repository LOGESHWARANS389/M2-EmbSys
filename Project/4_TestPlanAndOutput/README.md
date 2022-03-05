# Test Plans

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Is Engine Started  | push button=1| push button=1| PASS  |
| TID_02  | Is Engine Not Started  | push button=0| push button=0 | PASS  |
| TID_03  | Temperature Request | Temp=0| Cooler Fan=OFF | PASS  |
| TID_04  | Temperature Request | Temp=100| Cooler Fan=ON | PASS  |
| TID_05  | Temperature Request | Temp=200| Cooler Fan=ON | PASS  |
| TID_06  | Temperature Request | Temp=230| Cooler Fan=ON | PASS  |
| TID_07  | LED ON | Button=1 && Cooler Fan=1| LED=1 | PASS  |
| TID_08  | LED OFF | Button=0 && Cooler Fan=0| LED=0 | PASS  |
| TID_09  | LCD Display | Temperature :)<br />230 deg Cel| Temperature :)<br />230 deg Cel| PASS  |
