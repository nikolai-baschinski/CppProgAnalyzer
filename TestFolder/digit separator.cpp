void Stopwatch::onTick()
{
    IF_ASSERT_FAILED(m_startTime) {
        return;
    }
    if (m_playState == Playing) {
        using namespace std::chrono;
        const auto now = steady_clock::now();
        const auto elapsed = duration_cast<microseconds>(now - *m_startTime).count();
        m_elapsedTime = elapsed / 1'000'000.0;
        emit elapsedTimeChanged();
    }
    emit tick();
}

int billion = 1'000'000'000;


