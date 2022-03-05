# Test Plans

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | If Engine Started  | Push button=1| Push button=1| PASS  |
| TID_02  | If Engine Not Started  | Push button=0| Push button=0 | PASS  |
| TID_03  | Temperature Request | Temp=0 deg Cel| Cooler Fan=OFF | PASS  |
| TID_04  | Temperature Request | Temp=100 deg Cel| Cooler Fan=OFF | PASS  |
| TID_05  | Temperature Request | Temp=200 deg Cel| Cooler Fan=OFF | PASS  |
| TID_06  | Temperature Request | Temp=230 deg Cel| Cooler Fan=ON | PASS  |
| TID_07  | LED ON | Push Button=1 && Cooler Fan=1| LED=1 | PASS  |
| TID_08  | LED OFF | Push Button=0 && Cooler Fan=0| LED=0 | PASS  |
| TID_09  | LCD Display | Temperature: <br />230 deg Cel| Temperature: <br />230 deg Cel| PASS  |
