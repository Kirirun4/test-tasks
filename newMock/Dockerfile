FROM amazoncorretto:17.0.3-alpine as corretto-jdk
ADD /target/newMock-v.0.1.jar mock.jar
ENTRYPOINT ["java","-jar","mock.jar"]
