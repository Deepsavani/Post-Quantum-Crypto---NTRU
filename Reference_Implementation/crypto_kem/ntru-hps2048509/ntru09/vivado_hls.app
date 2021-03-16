<project xmlns="com.autoesl.autopilot.project" name="ntru09" top="crypto_kem_keypair">
    <files>
        <file name="../../PQCgenKAT_kem.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas"/>
        <file name="aes.c" sc="0" tb="false" cflags=""/>
        <file name="crypto_sort.c" sc="0" tb="false" cflags=""/>
        <file name="fips202.c" sc="0" tb="false" cflags=""/>
        <file name="kem.c" sc="0" tb="false" cflags=""/>
        <file name="owcpa.c" sc="0" tb="false" cflags=""/>
        <file name="pack3.c" sc="0" tb="false" cflags=""/>
        <file name="packq.c" sc="0" tb="false" cflags=""/>
        <file name="poly.c" sc="0" tb="false" cflags=""/>
        <file name="rng.c" sc="0" tb="false" cflags=""/>
        <file name="sample.c" sc="0" tb="false" cflags=""/>
        <file name="verify.c" sc="0" tb="false" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow askAgain="false" name="csim" csimMode="2" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="Keypair" status="active"/>
        <solution name="enc" status="inactive"/>
        <solution name="dec" status="inactive"/>
    </solutions>
</project>

