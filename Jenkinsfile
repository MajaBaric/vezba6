pipeline {
    agent { docker { image 'maven:3.9.5-eclipse-temurin-17-alpine' } }
    stages {
        stage('build') {
            steps {
                echo 'hello from jenkins file build stage'
            }
            stage('test') {
            steps {
                echo 'hello from jenkins file test stage'
            }
                stage('deploy') {
            steps {
                echo 'hello from jenkins file deploy stage'
            }
        }
    }
}
