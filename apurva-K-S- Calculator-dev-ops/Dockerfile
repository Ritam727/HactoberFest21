FROM openjdk:8
COPY ./target/sample_calculator-1.0-SNAPSHOT-jar-with-dependencies.jar ./
WORKDIR ./
CMD ["java", "-cp" , "sample_calculator-1.0-SNAPSHOT-jar-with-dependencies.jar", "calculator.Calculator"]