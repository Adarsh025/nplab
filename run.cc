sudo su
cd ns-allinone-3.30.1/ns-3.30.1
cd scratch/
gedit filename.cc
cd  ..
./waf
./waf  --run scratch/filename 
cd  ..
cd netanim-3.108/
export QT_X11_NO_MITSHM=1 
search .xml 

./NetAnim
