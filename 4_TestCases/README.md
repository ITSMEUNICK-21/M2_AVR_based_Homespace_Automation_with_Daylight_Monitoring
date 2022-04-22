# Test Cases:

## Overall Working System

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Object within 150 cm range and the daylight intensity is less than 150 lux|Bulb is ON|Bulb is ON|Requirements based|
|TST_2|Object within 150 cm range and the daylight intensity is more than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|
|TST_3|Object more than 150 cm range and the daylight intensity is less than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|
|TST_4|Object more than 150 cm range and the daylight intensity is more than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|

## LDR Sensor Unit Testing

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Minimum measurement of daylight intensity possible|0 lux |0 lux|Boundary based|
|TST_2|Maximum measurement of daylight intensity possible|>= 10000 lux|999 lux|Boundary based|
|TST_3|Measures required daylight intensity|150 lux|150 lux|Requirements based|

## Ultrasonic Sensor Unit Testing 

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Minimum measurement of distance possible|1 cm |4 cm|Boundary based|
|TST_2|Maximum measurement of daylight intensity possible|400 cm|275 cm|Boundary based|
|TST_3|Measures required distance|150 cm|150 cm|Requirements based|
