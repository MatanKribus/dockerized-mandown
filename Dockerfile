# syntax=docker/dockerfile:1

FROM ubuntu:22.04

RUN apt update -y && apt install -y build-essential libconfig-dev libncursesw5-dev libxml2-dev git && apt upgrade -y 
RUN git clone https://github.com/Titor8115/mandown.git
WORKDIR mandown
RUN make install
ENTRYPOINT ["mdn"]
