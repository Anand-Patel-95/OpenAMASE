set here=%CD%
cd ..\..
java -Xmx2048m -splash:./data/amase_splash.png -classpath ./dist/*;./lib/*;./lib/jogl/*;./lib/GRAL/*;  avtas.app.Application %*
cd %here%
