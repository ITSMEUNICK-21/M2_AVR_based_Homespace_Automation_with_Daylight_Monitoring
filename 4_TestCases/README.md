# TEST PLAN:

## Table no : High level test plan

|HLT_ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|:--:|
|HLT_1|Old Regime age less than 60|600000|32500|32500|Requirements based|
|HLT_2|Old Regime age more than 60 less than 80|600000|30000|30000|Requirements based|
|HLT_3|Old Regime age more than 80|600000|20000|20000|Requirements based|
|HLT_4|New Regime all ages|600000|22500|22500|Requirements based|


## Table no : Low level test plan
|HLT_ID|LLT_ID|Description|Exp I/P|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|:--:|:--:|
|HLT_1|LLT_1|Old Regime <60 2.5-5 lpa|400000|7500|7500|Requirements based|
||LLT_2|Old Regime <60 5-10 lpa|600000|32500|32500|Requirements based|
||LLT_3|Old Regime <60 >10 lpa|1100000|142500|142500|Requirements based|
|HLT_2|LLT_1|Old Regime >60 and <80 3-5 lpa|400000|5000|5000|Requirements based|
||LLT_2|Old Regime >60 and <80 5-10 lpa|600000|30000|30000|Requirements based|
||LLT_3|Old Regime >60 and <80 >10 lpa|1100000|140000|140000|Requirements based|
|HLT_3|LLT_1|Old Regime >80 5-10 lpa|600000|20000|20000|Requirements based|
||LLT_2|Old Regime >80 >10 lpa|1100000|130000|130000|Requirements based|
|HLT_4|LLT_1|New Regime 2.5-5 lpa|400000|7500|7500|Requirements based|
||LLT_2|New Regime 5-7.5 lpa|600000|22500|22500|Requirements based|
||LLT_3|New Regime 7.5-10 lpa|800000|45000|45000|Requirements based|
||LLT_4|New Regime 10-12.5 lpa|1100000|95000|95000|Requirements based|
||LLT_5|New Regime 12.5-15 lpa|1300000|137500|137500|Requirements based|
||LLT_6|New Regime >15 lpa|1600000|217500|217500|Requirements based|
