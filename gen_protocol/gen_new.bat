SET "CPP_PATH=../../protocol/"


cd proto
for /f "delims=" %%i in ('dir /b . "*.proto"') do  ..\protoc.exe %%i --cpp_out=%CPP_PATH% 


pause
