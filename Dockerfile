From alpine:latest
COPY  ./C_Code.out ./csv_readwrite.so ./liblib1.so ./liblib2.so /
COPY ./deps /lib64/
RUN chmod 777 /lib64/*
ADD input /input
CMD ["./C_Code.out"]
