<project xmlns="com.autoesl.autopilot.project" name="ntru01" top="crypto_kem_keypair">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow askAgain="false" name="csim" csimMode="2" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../PQCgenKAT_kem.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="aes.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="fips202.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="kem.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="owcpa.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="pack3.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="packq.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="poly.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="rng.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="sample.c" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="verify.c" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="keypair" status="active"/>
        <solution name="enc" status="inactive"/>
        <solution name="dec" status="inactive"/>
    </solutions>
</project>

