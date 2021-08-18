<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="com.autoesl.autopilot.project" name="ISI_MUL_EN" top="estimate_ISI_encode">
  <files>
    <file name="../../code/test_data_3.h" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
    <file name="../../code/golden_data1.h" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
    <file name="../../code/ISI_MUL_En_test.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
    <file name="code/ISI_MUL_En.h" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
    <file name="code/ISI_MUL_En.cpp" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
  </files>
  <solutions>
    <solution name="solution1" status="active"/>
    <solution name="unroll_2_pipeline" status="inactive"/>
    <solution name="unroll_4_pipeline" status="inactive"/>
    <solution name="unroll_8_pipeline" status="inactive"/>
    <solution name="unroll_12_pipeline" status="inactive"/>
    <solution name="fully_unroll_unpack" status="inactive"/>
  </solutions>
  <includePaths/>
  <libraryPaths/>
  <Simulation>
    <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
  </Simulation>
</project>
